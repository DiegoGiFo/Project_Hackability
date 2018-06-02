const int piezo1 = A0;
const int piezo2 = A1;
const int led1 = 12;
const int led2 = 11;
const int th = 200;
const int buzzerPin = 10;


int val1;
int val2;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val1= analogRead(piezo1);
  val2= analogRead(piezo2);
  if (val1 >= th)
  {
    Serial.println("Valore piezo1: ");
    Serial.println(val1);
    digitalWrite(led1, HIGH);
    tone(buzzerPin, 150,5);
  }
  else{
    digitalWrite(led1, LOW);
    //noTone(buzzerPin);
  }

  if(val2 >= th){
    Serial.println("Valore piezo2: ");
    Serial.println(val2);
    digitalWrite(led2,HIGH);
    tone(buzzerPin, 300,5);
  }
  else{
    digitalWrite(led2, LOW);
    //noTone(buzzerPin);
  }
}
