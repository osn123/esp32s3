
void buttonState(Btn &btn)
{
  btn.State = digitalRead(btn.pin);
  if (btn.State != btn.lastState)
  {
    delay(50); // デバウンシングのための遅延

    if (btn.State == LOW)
    {
      // ボタン1が押されたときの処理を記述
      btn.mode = (btn.mode + 1) % 3; // 3つのモードを切り替える（0, 1, 2）
    }
    btn.lastState = btn.State; // ボタン1の状態を更新
  }
}

void printPixelData(Pixel &pp)
{
  for (int i = 0; i < xcnt; ++i)
  { // 配列の要素数分ループ
    Serial.println("x[" + String(pp.name[i]) + "] = " + String(pp.x[i]++));
  }
  Serial.println("red = " + String(pp.red));
  Serial.println("green = " + String(pp.green));
  Serial.println("blue = " + String(pp.blue));
  Serial.println(btn[0].State);
  Serial.println(btn[0].mode);
  Serial.println(btn[0].pin);
  Serial.println(btn[0].lastState);
}

void disp_sidebar(Pixel &ppp)
{
  // display.clearDisplay(); // 表示クリア
  display.fillRect(0, 0, 2, 7 * (i + 1), SSD1306_WHITE);
  display.fillRect(3, 64 - 7 * (i + 1), 2, 7 * (i + 1), SSD1306_WHITE);
  display.display(); // 表示実行
}
void disp_mode(Pixel &ppp)
{
  display.clearDisplay();                        // 表示クリア
  display.setTextSize(2);                        // 文字サイズ（1）
  display.setCursor(10, 0);                      // 表示開始位置左上角（X,Y）
  display.println("mode" + String(btn[0].mode)); // 表示内容
  display.display();                             // 表示実行
}
void disp_pixel(Pixel &ppp)
{
  pixels.clear();
  pixels.setPixelColor(btn[0].mode + 3, pixels.Color(ppp.red, ppp.green, ppp.blue)); // LEDの色を設定
  // pixels.rainbow()
  pixels.show(); // LEDに色を反映
}

void disp(Pixel &ppp)
{
  if (btn[0].mode != btn[0].lastmode)
  {
    disp_pixel(ppp);
    disp_sidebar(ppp);
    disp_mode(ppp);
  }
}
void handleButtonPress()
{
  btn[1].buttonPressed = true;
}
