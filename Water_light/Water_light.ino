#define Led1_Pin 4
#define Led2_Pin 5
#define Led3_Pin 6
#define Led4_Pin 7
#define Led5_Pin 8
#define Led6_Pin 9
#define Led7_Pin 10
#define Led8_Pin 11

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin Blink_Led_Pin as an output.
  pinMode(Led1_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led2_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led3_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led4_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led5_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led6_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led7_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  pinMode(Led8_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
  digitalWrite(Led1_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led2_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led3_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led4_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led5_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led6_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led7_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  digitalWrite(Led8_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW

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
