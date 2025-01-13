// #include <Adafruit_NeoPixel.h>
// #define PIN 23 //INが接続されているピンを指定
// #define NUMPIXELS 10 //LEDの数を指定
// Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); //800kHzでNeoPixelを駆動

// void setup() {
//   pixels.begin(); //NeoPixelを開始
// }

// void loop() {
//   pixels.clear(); //NeoPixelの出力をリセット
//   for(int i=0; i<NUMPIXELS; i++) { //LEDを１つずつ制御
//     pixels.setPixelColor(i, pixels.Color(60-8*i, i*10, i*8)); //LEDの色を設定
//     pixels.show();   //LEDに色を反映
//     delay(500); //500ms待機
//   }
// }

#include <Arduino.h>
#include <Wire.h>        
#include <Adafruit_SSD1306.h> //別途「Adafruit BusIO」ライブラリ必要
#include <Adafruit_NeoPixel.h>

// #include "props.h"
// #include "methods.h"

#define PIN 23 //INが接続されているピンを指定
#define NUMPIXELS 9 //LEDの数を指定
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); //800kHzでNeoPixelを駆動

#define SCREEN_WIDTH 128  //OLED 幅指定
#define SCREEN_HEIGHT 64  //OLED 高さ指定
#define OLED_RESET -1     //リセット端子（未使用-1）

// I2Cに接続されたSSD1306用「display」の宣言
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int buttonPin1 = 4; // ボタン1のピン番号

int buttonState1 = 0; // ボタン1の状態を保持する変数
int lastButtonState1 = 0; // ボタン1の直前の状態を保持する変数

int mode = 0;            // 現在のモードを示す変数
int lastmode = 0;            // 現在のモードを示す変数


void setup()
{
// pinMode(1,OUTPUT);
// pinMode(3,OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP); // ボタン1を入力として設定
  	// digitalWrite(buttonPin1, HIGH);

  // digitalWrite(bre, HIGH);
	// digitalWrite(bgr, HIGH);
	// digitalWrite(bbl, HIGH);
	// digitalWrite(b1, HIGH);
	// digitalWrite(b2, HIGH);
	// digitalWrite(b3, HIGH);
	// digitalWrite(b4, HIGH);
  //初期化する
  Wire.begin(21, 22);   //Grove端子をI2C設定(SDA,SDL)

  // OLED初期設定
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306:0 allocation failed"));
    for (;;); //エラーなら無限ループ
  }
  // OLED表示設定
  display.setTextColor(SSD1306_WHITE);  //文字色
  pixels.begin(); //NeoPixelを開始
   pixels.setBrightness(5);

// digitalWrite(1, LOW); //IO3pinの出力をHIGHにする
// digitalWrite(3, LOW); //IO3pinの出力をHIGHにする

}

void loop() {
  // display.clearDisplay();     //表示クリア

    buttonState1 = digitalRead(buttonPin1);

  // タイトル表示
  // display.setTextSize(1);     //文字サイズ（1）
  // display.setCursor(4, 0);    //表示開始位置左上角（X,Y）
  // display.println("OLED");    //表示内容
  // display.setCursor(4, 10);   //表示開始位置左上角（X,Y）
  // display.println("TEST");    //表示内容

  // display.setTextSize(2);     //文字サイズ（2）
  // display.setCursor(39, 2);   //表示開始位置左上角（X,Y）
  // display.println("SSD1306"); //表示内容

  // // 本体ボタンON/OFF状態表示
  // display.setTextSize(1);     //文字サイズ（1）
  // display.setCursor(5, 28);   //表示開始位置左上角（X,Y）

  // display.setCursor(72, 28);          //座標を指定

  // // 図形表示
  // display.drawLine(0, 20, 128, 20, WHITE);   //線（始点終点指定）
  // display.drawFastVLine(64, 22, 17, WHITE);  //線（指定座標から垂線）
  // display.drawFastHLine(0, 40, 128, WHITE);  //線（指定座標から平行線）

  // display.drawCircle(10, 55, 8, WHITE);      //円
  // display.fillCircle(30, 55, 8, WHITE);      //円（塗り潰し）

  // display.drawTriangle(46, 62, 54, 48, 62, 62, WHITE); //三角
  // display.fillTriangle(66, 62, 74, 48, 82, 62, WHITE); //三角（塗り潰し）

  // display.drawRect(90, 47, 16, 16, WHITE);   //四角
  // display.fillRect(110, 47, 16, 16, WHITE);  //四角（塗り潰し）

  if (buttonState1 != lastButtonState1) {
    delay(50); // デバウンシングのための遅延

    if (buttonState1 == LOW) {
      // ボタン1が押されたときの処理を記述
         mode = (mode + 1) % 3; // 3つのモードを切り替える（0, 1, 2）


    }


    // ボタン1の状態を更新
    lastButtonState1 = buttonState1;
  }
  
        // for(int i=0; i<NUMPIXELS; i++) { //LEDを１つずつ制御
        //   pixels.setPixelColor(i, pixels.Color(255, 255, 255)); //LEDの色を設定
        //   pixels.show();   //LEDに色を反映
        //   display.fillRect(0, 0, 2, 7*(i+1), SSD1306_WHITE);
        //   display.fillRect(3, 64-7*(i+1), 2, 7*(i+1), SSD1306_WHITE);
        //   display.display();  //表示実行
        //   delay(500); //500ms待機
        // }


    // display.clearDisplay();     //表示クリア
    // display.display();  //表示実行
    // pixels.clear(); //NeoPixelの出力をリセット
    // pixels.show();   //LEDに色を反映
    // delay(500); //500ms待機
      // モードに応じた処理を実行
  switch (mode) {
    case 0:
      // モード0の処理
      if(mode!=lastmode){
            display.clearDisplay();     //表示クリア
            pixels.setPixelColor(5, pixels.Color(255, 255, 255)); //LEDの色を設定
            pixels.show();   //LEDに色を反映

            display.setTextSize(1);     //文字サイズ（1）
            display.setCursor(4, 0);    //表示開始位置左上角（X,Y）
            display.println("mode" + String(mode)); //表示内容      
            display.display();  //表示実行

      }
      break;
    case 1:
      // モード1の処理
            if(mode!=lastmode){
            display.clearDisplay();     //表示クリア
      pixels.setPixelColor(5, pixels.Color(255, 255, 0)); //LEDの色を設定
                  pixels.show();   //LEDに色を反映

      display.setTextSize(1);     //文字サイズ（1）
      display.setCursor(4, 10);    //表示開始位置左上角（X,Y）
      display.println("mode" + String(mode)); //表示内容    
                  display.display();  //表示実行

            }  
      break;
    case 2:
      // モード2の処理
            if(mode!=lastmode){
            display.clearDisplay();     //表示クリア
      pixels.setPixelColor(5, pixels.Color(255, 0, 255)); //LEDの色を設定
                  pixels.show();   //LEDに色を反映

      display.setTextSize(1);     //文字サイズ（1）
      display.setCursor(4, 20);    //表示開始位置左上角（X,Y）
      display.println("mode" + String(mode)); //表示内容     
                  display.display();  //表示実行

            } 
      break;
    default:
      // その他の処理
      pixels.setPixelColor(5, pixels.Color(0, 255, 255)); //LEDの色を設定
      break;
  }

  // ここに各モードの処理を記述
          // pixels.show();   //LEDに色を反映
          // display.display();  //表示実行
          lastmode=mode;

}