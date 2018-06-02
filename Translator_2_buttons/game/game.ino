#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

/* 00000 00000
   00000 00000
   00000 00000
   00000 00000
   00000 00000
   00000 00000
   00000 00000
   00000 00000
*/

byte heart[8] = {
  B00000,
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};
byte smiley[8] = {
  B00000,
  B11011,
  B11011,
  B00000,
  B10001,
  B10001,
  B01110,
  B00000
};

void setup() {
  lcd.createChar(0, smiley);
  lcd.createChar(1, heart);
  lcd.begin(20, 4);
  lcd.setCursor(17,3);
  lcd.write(byte(1));
  lcd.write(byte(1));
  lcd.write(byte(1));
  lcd.setCursor(0,0);
  char gamechar = 'D';
  lcd.print("Scrivi la lettera: ");
  lcd.print(gamechar);
}

void loop() {}
