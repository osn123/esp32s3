#include "pinset.h"
#include "function.h"
// #include "props.h"
// #include "methods.h"
void setup()
{
  // pinMode(buttonPin1, INPUT_PULLUP);                                              // ボタン1を入力として設定
  // pinMode(buttonPin2, INPUT_PULLUP);                                              // ボタン1を入力として設定
  for (int i = 0; i < sizeof(btn) / sizeof(btn[0]); i++)
    pinMode(btn[i].pin, INPUT_PULLUP); // ボタン1を入力として設定

  // attachInterrupt(digitalPinToInterrupt(buttonPin2), handleButtonPress, FALLING); // ボタンの割り込みを設定
  attachInterrupt(digitalPinToInterrupt(btn[1].pin), handleButtonPress, FALLING); // ボタンの割り込みを設定

  Serial.begin(115200);
  Serial.println();

  Wire.begin(21, 22); // Grove端子をI2C設定(SDA,SDL)

  // OLED初期設定
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println(F("SSD1306:0 allocation failed"));
    for (;;)
      ; // エラーなら無限ループ
  }
  display.setTextColor(SSD1306_WHITE); // 文字色
  pixels.begin();                      // NeoPixelを開始
  pixels.setBrightness(10);
}

void loop()
{
  buttonState(&buttonState1, &lastButtonState1, buttonPin1);

  if (buttonPressed)
  {
    disp_mode(pix[0]);

    // pix.x[]+=10;
    printPixelData(pix[1]);
    printPixelData(pix[2]);

    // ボタンが押された時の処理をここに書く
    // 例えば LED を点灯させる、何らかの動作を開始する、など

    delay(50);             // デバウンシングのための遅延
    buttonPressed = false; // フラグをリセット
  }

  switch (mode)
  {
  case 0:
    // モード0の処理
    disp(pix[0]);
    break;
  case 1:
    // モード1の処理
    disp(pix[1]);

    break;
  case 2:
    // モード2の処理
    disp(pix[2]);

    break;
  default:
    // その他の処理
    break;
  }
  lastmode = mode;

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