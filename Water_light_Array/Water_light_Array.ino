int LedPins[] = {4,5,6,7,8,9,10,11} ;
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
  // Step 0
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
  // Step 1
  digitalWrite(Led1_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
    // Step 2
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
    // Step 3
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
      // Step 4
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
    // Step 5
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
      // Step 6
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
      // Step 7
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
    // Step 8
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, HIGH);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              //休息1秒 wait for a second  
}
