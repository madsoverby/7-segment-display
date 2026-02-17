#define SEG_A 12
#define SEG_B 14
#define SEG_C 32
#define SEG_D 33
#define SEG_E 25
#define SEG_F 26
#define SEG_G 27

#define BUT_PIN 0

// defines all the pins

int  butState = 0;

int inputTal = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);

  pinMode(BUT_PIN, INPUT_PULLUP);

  // setting all segmendts to be OUTPUT
  // and beginign Serial comunication




  Serial.begin(115200);

}
/*
 0 - 9 is numbers
 10 - 15 is letters A - F
 16 is a wating animation
*/
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    String input = Serial.readStringUntil('\n'); // reading a line
    input.trim();                                // delets \r and space
    inputTal = input.toInt(); 

    seg_num(inputTal);
  }
  delay(100);
}



void seg_num(int tal){

  //declaring all letters, numbers and the animation and puts it all in på a function
  if (tal == 10){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 11){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 12){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 0);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 13){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 14){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 0);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 15){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 0);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }

if (tal == 16){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 0);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 0);
    digitalWrite(SEG_A, 1);
    delay(100);
    digitalWrite(SEG_B, 1);
    delay(100);
    digitalWrite(SEG_A, 0);
    delay(100);
    digitalWrite(SEG_C, 1);
    delay(100);
    digitalWrite(SEG_B, 0);
    delay(100);
    digitalWrite(SEG_D, 1);
    delay(100);
    digitalWrite(SEG_C, 0);
    delay(100);
    digitalWrite(SEG_E, 1);
    delay(100);
    digitalWrite(SEG_D, 0);
    delay(100);
    digitalWrite(SEG_F, 1);
    delay(100);
    digitalWrite(SEG_E, 0);
    delay(100);
    digitalWrite(SEG_F, 0);
} 
  if (tal == 20){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 0);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 0);
}
  if (tal == 0){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 0);
  }
  if (tal == 1){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 0);
  }
  if (tal == 2){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 0);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 3){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 4){
    digitalWrite(SEG_A, 0);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 5){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 6){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 0);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 7){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 0);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 0);
    digitalWrite(SEG_G, 0);
  }
  if (tal == 8){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 1);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  if (tal == 9){
    digitalWrite(SEG_A, 1);
    digitalWrite(SEG_B, 1);
    digitalWrite(SEG_C, 1);
    digitalWrite(SEG_D, 1);
    digitalWrite(SEG_E, 0);
    digitalWrite(SEG_F, 1);
    digitalWrite(SEG_G, 1);
  }
  

}

