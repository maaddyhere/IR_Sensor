int ledpin=13;
int IrSensor=12;
int value;


void setup() {
  pinMode(IrSensor,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value=digitalRead(IrSensor);
  if(value==0)
  {
    Serial.println(value);
    digitalWrite(ledpin,HIGH);
    delay(1000);

  }
  else
  {
    Serial.println(value);
    digitalWrite(ledpin,LOW);
    delay(1000);
  }
  

}