#define potpin A0
#define led3 3
int deger=0;
void setup() {
  Serial.begin(9600);
  Serial.println("Pot Değer Okuma");
}

void loop() {
  deger=analogRead(potpin);
  Serial.println(deger);
  int potd = map(deger,0,1023,0,255);
  analogWrite(led3,potd);
}
