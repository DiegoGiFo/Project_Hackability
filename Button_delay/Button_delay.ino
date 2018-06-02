// Esempio 03: antirimbalzo
// accendi il led appena è premuto il pulsante mantenendolo acceso quando si rilascia
// premendo una seconda volta il pulsante spegne il led

#include <LiquidCrystal.h>

#define LED 13                // LED collegato al pin digitale 13
#define BUTTON 9              // pin di input dove è collegato il pulsante
#define ATTESA 3000
int val = 0;                  // si userà val per conservare lo stato del pin di input

int count = 0;
unsigned long duration = 0;
bool oneClick = true;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);

  lcd.begin(20, 4);

  pinMode(LED, OUTPUT);       // imposta il pin digitale come output
  pinMode(BUTTON, INPUT_PULLUP);     // imposta il pin digitale come input
}

void loop() {

  val = digitalRead(BUTTON) ? LOW : HIGH;

  if (val == HIGH && oneClick){
    oneClick = false;
    if(count++ == 0)
      duration = millis() + ATTESA;
      Serial.println(count);
      lcd.setCursor(0,1);
      lcd.print(count);

  } else if (val == LOW && !oneClick){
    oneClick = true;
  }
  if ((count>=2) || (count > 0 && millis() >= duration)) {
    if (count == 1) {
      Serial.println("Un click");
      lcd.setCursor(0,2);
      lcd.print("Un click");

    } else if (count == 2) {
      Serial.println("Doppio click");
      lcd.setCursor(0,3);
      lcd.print("Doppio click");

    }
    count = 0;
  }
  delay(100);
}
