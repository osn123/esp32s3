#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h> //別途「Adafruit BusIO」ライブラリ必要
#include <Adafruit_NeoPixel.h>

#define PIN 23                                                  // INが接続されているピンを指定
#define NUMPIXELS 9                                             // LEDの数を指定
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // 800kHzでNeoPixelを駆動

#define SCREEN_WIDTH 128                                                  // OLED 幅指定
#define SCREEN_HEIGHT 64                                                  // OLED 高さ指定
#define OLED_RESET -1                                                     // リセット端子（未使用-1）
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); // I2Cに接続されたSSD1306用「display」の宣言

const int buttonPin1 = 4;  // ボタン1のピン番号
const int buttonPin2 = 15; // ボタン1のピン番号

const int button[] = {4, 15}; // ボ

int buttonState1 = 0;     // ボタン1の状態を保持する変数
int lastButtonState1 = 0; // ボタン1の直前の状態を保持する変数

int mode = 0;     // 現在のモードを示す変数
int lastmode = 0; // 現在のモードを示す変数

int i = 0;
unsigned long previousMillis = 0;
const long interval = 500; // インターバルを1秒に設定

volatile bool buttonPressed = false; // ボタンが押されたかどうかを示すフラグ
int const xcnt = 3;

// int const SDApinNo = 21;
// int const SCLpinNo = 22;
// Grove端子をI2C設定(SDA,SCL)

class Pixel
{
public:
  uint16_t x[xcnt];
  String name[xcnt];
  uint8_t red, green, blue;
};
// Pixel pix = {{0, 1, 2}, {"Name1", "Name2", "Name3"}, 255, 0, 0};
Pixel pix[3] = {
    {.x = {0, 1, 2},
     .name = {"Name1", "Name2", "Name3"},
     .red = 255,
     .green = 255,
     .blue = 0},
    {.x = {3, 4, 5},
     .name = {"Name4", "Name5", "Name6"},
     .red = 255,
     .green = 0,
     .blue = 255},
    {.x = {6, 7, 8},
     .name = {"Name7", "Name8", "Name9"},
     .red = 0,
     .green = 255,
     .blue = 255}};

struct Btn
{
  int pin, mode, State, lastState, lastmode;
  String name;
  unsigned long lastDebounceTime;
  int debounceDelay;
  volatile bool buttonPressed;
};

Btn btn[] = {
    {.pin = buttonPin1,
     .mode = 0,
     .State = 0,
     .lastState = 0,
     .lastmode = 0,
     .name = "red",
     .lastDebounceTime = 0,
     .debounceDelay = 50,
     .buttonPressed = false},
     
    {.pin = buttonPin2,
     .mode = 1,
     .State = 1,
     .lastState = 0,
     .lastmode = 0,
     .name = "green",
     .lastDebounceTime = 0,
     .debounceDelay = 50,
     .buttonPressed = false}

};