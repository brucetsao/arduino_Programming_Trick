const byte interruptPin = 2;
int LedDirection = 1 ;
int LedPins[] = {4,5,6,7,8,9,10,11} ;
int NowLedOn = 0 ;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin Blink_Led_Pin as an output.
  
    // pinMode(ButtonPin,INPUT) ;
    for(int i=0; i <8 ; i++)
        {
              pinMode(LedPins[i], OUTPUT);    //定義Blink_Led_Pin為輸出腳位
              digitalWrite(LedPins[i], LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
        }
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), ButtonisPressed, FALLING );
}

// the loop function runs over and over again forever
void loop() {
   // int btnValue = digitalRead(ButtonPin) ;
  //  if (!btnValue)
 //         LedDirection  = LedDirection* (-1 );
   //  if 
       for (int i =0 ; i < 8; i++)
          {
              if (NowLedOn == i)
              {
                digitalWrite(LedPins[i], HIGH);   // turn on Led 
              }
              else
              {
                digitalWrite(LedPins[i], LOW);    // turn off Led 
              }
     
              
          }
          if (LedDirection == 1)
              {
                NowLedOn ++ ;   //right side move
              }
              else
              {
                NowLedOn -- ;     //left side move
                
              }
     if (NowLedOn >=8)      // check right side 
          NowLedOn= 0 ;
     if (NowLedOn < 0)      // check left side 
          NowLedOn= 7 ;

         delay(1000) ;   
}

void ButtonisPressed()
{
   LedDirection  = LedDirection* (-1 );
} 

