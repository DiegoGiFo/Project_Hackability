const int buzzer = A0;     //buzzer
const int buttonpunto = 10; // bottone punto
const int buttonlinea = 11; //bottone linea
const int led = 9;
const int linedur = 20; //durata del suono alla pressione del tasto linea
const int dotdur = 20; //durata del suono alla pressione del tasto punto
const int tonolinea = 320; //frequenza emessa alla pressione del tasto linea, MI
const int tonopunto = 440; //frequenza emessa alla pressione del tasto punto, LA

int LINE = 0;
int DOT = 0;

void setup() //iniziallizzazione dei vari componenti
{
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(buttonpunto,INPUT);
pinMode(buttonlinea,INPUT);
}

void loop()
{
  digitalWrite(led ,LOW); //led spento
  DOT = digitalRead(buttonpunto); // controllo di quale tasto è stato premuto
  LINE = digitalRead(buttonlinea);
  if (DOT == HIGH){ // se il tato punto è stato premuto accendere il led e far "suonare" il buzzer
      digitalWrite(led ,HIGH);
      tone(buzzer,tonopunto,dotdur);
  }
  else if(LINE == HIGH){  // se il tato linea è stato premuto accendere il led e far "suonare" il buzzer
      digitalWrite(led ,linedur);
      tone(buzzer,tonolinea,linedur);
  }
}
