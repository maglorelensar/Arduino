#define led 3
#define LDR A1
void setup() {
   Serial.begin(9600);
  Serial.println("Pot Değer Okuma");

}

void loop() {
  int deger=analogRead(LDR);
  Serial.println(deger);
  deger=map(deger,0,1023,0,255);
  analogWrite(led,deger);
  

}
