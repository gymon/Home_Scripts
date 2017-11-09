
char incomingByte; 
bool temp = false;
int leds[] = {4, 5, 6, 7};
#define SIZE 4
int i;
int czas= 1000;


void setup() {
    
  for (i = 0; i < SIZE; i++) 
  {
    pinMode(leds[i], OUTPUT);
   digitalWrite(leds[i], HIGH);  
  }
  temp = false; 
           
}

void zapalFurtka()
{
  
//Bar graph
  for (i = 0; i < SIZE; i++) 
  {
    digitalWrite(leds[i], LOW);
    delay(czas);
  }

  delay(10000);
  
  for (i = 0; i < SIZE; i++) 
  {
    digitalWrite(leds[i], HIGH);
    delay(czas);
   }
  
}


 
   


void loop() {

if(temp == false)
{ 
zapalFurtka();
temp = true;
}    

}
