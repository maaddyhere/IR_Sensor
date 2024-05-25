int Redled=8;
int Greenled=9;
int sensor;
int value;

void setup() {
  pinMode(Redled,OUTPUT);
  pinMode(Greenled,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  value=digitalRead(sensor);
  if(value==0)
  {
    digitalWrite(Greenled,HIGH);
    delay(1000);
    diitalWrite(Greenled,LOW);
    Serial.println(value);
  }
  else
  {
    digitalWrite(Redled,HIGH);
    delay(1000);
    digitalWrite(Redled,LOW);
    Serial.println(value);
  }

}