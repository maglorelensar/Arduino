int ledler[] = {2,3,4,5,6,7}; //Değişkenleri belirttiğimiz bir dizi tanımlıyoruz.

void setup() 
{
  for(int i=0; i<6; i++) {//For döngüsünün 6 kez tekrarlanmasını istiyoruz.
  pinMode(ledler[i], OUTPUT); //i değişkenlerini "çıkış" olarak tanımlıyoruz.
  }
}
void loop() {
 for(int i=0; i<6; i++) { 
 digitalWrite(ledler[i], HIGH);
 delay(10);
 digitalWrite(ledler[i], LOW);
 }//İlk ledden beşinci lede kadar ledler sırasıyla yanıyor. Yani döngüde ilk led yanar, söner ve ikinci led yanar. İkinci led söndüğünde ise üçüncü led yanar ve döngü bu şekilde devam eder.
 for(int j=5; j>-1; j--) {
 digitalWrite(ledler[j], HIGH);
 delay(5);
 digitalWrite(ledler[j], LOW);
 }} 
 
