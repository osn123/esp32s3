#include "pinset.h"
#include "function.h"
// #include "props.h"
// #include "methods.h"
void setup()
{
  for (int i = 0; i < sizeof(btn) / sizeof(btn[0]); i++)
    pinMode(btn[i].pin, INPUT_PULLUP); // ボタン1を入力として設定

  attachInterrupt(digitalPinToInterrupt(btn[1].pin), handleButtonPress, FALLING); // ボタンの割り込みを設定

  Serial.begin(115200);
  Serial.println();
  Wire.begin(21, 22); // Grove端子をI2C設定(SDA,SDL)

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) // OLED初期設定
  {
    Serial.println(F("SSD1306:0 allocation failed"));
    for (;;)
      ; // エラーなら無限ループ
  }
  display.setTextColor(SSD1306_WHITE); // 文字色

  pixels.begin(); // NeoPixelを開始
  pixels.setBrightness(10);
}

void loop()
{
  buttonState(btn[0]);
  // buttonState(btn[0].mode, btn[0].State, btn[0].lastState, btn[0].pin);

  if (btn[1].buttonPressed) // 外部割込み
  {
    //   // if (btn[1].State != btn[1].lastState)
    //   // {
    // delay(50); // デバウンシングのための遅延
    if ((millis() - btn[1].lastDebounceTime) > 50)
    { // 50ミリ秒以下の割り込みは無視する

      if (digitalRead(btn[1].pin) == LOW)
      {
        // if (btn[1].State == LOW)
        //     // {
        //       // ボタン1が押されたときの処理を記述
        disp_mode(pix[0]);
        printPixelData(pix[1]); // シリアル表示
        printPixelData(pix[2]);
      }
      btn[1].lastDebounceTime = millis(); // 割り込み時刻更新
    }
    btn[1].buttonPressed = false; // フラグをリセット
    //     // btn[1].lastState = btn[1].State; // ボタン1の状態を更新
    //   // }
  }

  switch (btn[0].mode)
  {
  case 0: // モード0の処理
    disp(pix[0]);
    break;
  case 1: // モード1の処理
    disp(pix[1]);

    break;
  case 2: // モード2の処理
    disp(pix[2]);

    break;
  default: // その他の処理
    break;
  }
  btn[0].lastmode = btn[0].mode;

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    // 一定時間経過した時の処理
    display.fillRect(0, 0, 2, 7 * (i + 1), SSD1306_WHITE);
    display.fillRect(3, 64 - 7 * (i + 1), 2, 7 * (i + 1), SSD1306_WHITE);
    display.display();              // 表示実行
    previousMillis = currentMillis; // 時間を更新
    if (i < 8)
      i++;
    else
    {
      i = 0;
      disp_mode(pix[0]);
    }
  }

  // for(int i=0; i<NUMPIXELS; i++) { //LEDを１つずつ制御
  //   display.fillRect(0, 0, 2, 7*(i+1), SSD1306_WHITE);
  //   display.fillRect(3, 64-7*(i+1), 2, 7*(i+1), SSD1306_WHITE);
  //   display.display();  //表示実行
  //   delay(500); //500ms待機
  // }
}