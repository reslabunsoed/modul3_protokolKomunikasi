#include<LiquidCrystal_I2C.h>
#include<Wire.h>

int kolom = 16;
int baris = 2;

LiquidCrystal_I2C lcd(0x27, kolom, baris);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setBacklight(HIGH);

   // Menampilkan pesan pada LCD
  lcd.setCursor(2, 0);  // Posisi kolom ke-2, baris ke-0
  lcd.print("Hello World!");

  lcd.setCursor(2, 1);  // Posisi kolom ke-2, baris ke-1
  lcd.print("Tutorial LCD");
}

void loop() {
  // Tidak ada perintah berulang
}