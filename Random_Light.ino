int randomlight;
int timeon;

void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop(){
randomlight=random(3,6);
timeon=random(500,5000);
digitalWrite(randomlight,HIGH);
delay(timeon);
digitalWrite(randomlight,LOW);
}
