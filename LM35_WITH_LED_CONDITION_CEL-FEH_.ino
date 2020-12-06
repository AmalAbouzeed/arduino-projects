#define ts A0
int tv=0;
int led=2;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  tv=analogRead(ts);
  float tempcel=(tv*500)/1023;
  float tempfeh=(tv*(9/5))+32;
  if(tempcel&&tempfeh>=20){
  Serial.println( "tempcel=");
  Serial.println( tempcel);
   Serial.println( "tempfeh=");
  Serial.println( tempfeh);
  digitalWrite(led,HIGH);
  delay(500);
digitalWrite(led,LOW);
delay(500);

  }}
