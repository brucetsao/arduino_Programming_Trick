int LedPins[] = {4,5,6,7,8,9,10,11} ;
int NowLedOn = 0 ;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin Blink_Led_Pin as an output.
    for(int i=0; i <8 ; i++)
        {
              pinMode(LedPins[i], OUTPUT);    //定義Blink_Led_Pin為輸出腳位
              digitalWrite(LedPins[i], LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
        }

}

// the loop function runs over and over again forever
void loop() {
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
     NowLedOn ++ ;
     if (NowLedOn >=8)
          NowLedOn= 0 ;
         delay(1000) ;   
}
