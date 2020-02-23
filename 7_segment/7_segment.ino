/*
hEXA DECIMAL ENCODING FOR DISPLAYING NUMBERS 0 TO 9
 FOR COMBINATION - GFEDCBA to pins 2,3,4,5,6,7,8
 */
/*
 Hex codes for displayiing respective values
 */
const int ZERO = 0X7E;
const int ONE = 0X30;
const int TWO = 0X6D;
const int  THREE = 0X79;
const int  FOUR = 0X33;
const int  FIVE = 0X5B;
const int  SIX = 0X5F;
const int  SEVEN = 0X70;
const int   EIGHT = 0X7F;
const int  NINE = 0X7B;

//pins initialization
int pin[] = {
  2,3,4,5,6,7,8};

//calculating the no of pins
int no_pins = sizeof(pin)/sizeof(pin[0]);


void setup(){
  Serial.begin(9600);
  //setting all pins as Outputs
  for(int i = 0; i < no_pins;i++)
  {
    pinMode(pin[i],OUTPUT);

  }//end of for loop
}//end of setup


void loop(){
  for(int i=0;i<=9;i++)
  {
    switch(i)
    {
    case 0:
      display_it(ZERO);
      break;

    case 1:
      display_it(ONE);
      break;

    case 2:
      display_it(TWO);
      break;

    case 3:
      display_it(THREE);
      break;

    case 4:
      display_it(FOUR);
      break;

    case 5:
      display_it(FIVE);
      break;

    case 6:
      display_it(SIX);
      break;

    case 7:
      display_it(SEVEN);
      break;

    case 8:
      display_it(EIGHT);
      break;

    case 9:
      display_it(NINE);
      break;

    default :
      Serial.println("something went wrong");

    }//end of switch
  }//end of for loop()
}//end of loop


void display_it(const int value)
{
  for(int i=2,j=0;i<=8;i++,j++)
  {
    digitalWrite(i,bitRead(value,j));

  }
  delay(1000);
}
