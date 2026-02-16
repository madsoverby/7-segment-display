#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 4  // DATA-pin til DS18B20

// Setup OneWire og DallasTemperature
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);


#define SEG_A 12
#define SEG_B 14
#define SEG_C 32
#define SEG_D 33
#define SEG_E 25
#define SEG_F 26
#define SEG_G 27

#define BUT_PIN 0


int inputTal = 0;

void setup() {
  // put your setup code here, to run once:
  // Aktiver intern pull-up på ESP32 (kan erstatte ekstern 4.7kΩ, men mindre stabilt)
  pinMode(ONE_WIRE_BUS, INPUT_PULLUP);

  sensors.begin(); // Start kommunikation med DS18B20

  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);

  pinMode(BUT_PIN, INPUT_PULLUP);






  Serial.begin(115200);

}

/*

1 - 9 er tal

10 - 15 er til bogstav F

16 er en tænke animation

*/

int butState = 1;
int tidMellem = 700;

void loop() {
  // put your main code here, to run repeatedly:
  butState = digitalRead(BUT_PIN);
  if (butState == 0){
    sensors.requestTemperatures(); // Læs temperatur fra sensor
    float tempC = sensors.getTempCByIndex(0);



    // Konverter til heltal, fx 236 hvis du vil vise 23.6 som 3 cifre
    int tempInt = (int)(tempC * 10); // 236

    int hundrede = tempInt / 100;           // 2
    int tiere = (tempInt / 10) % 10;       // 3
    int enere = tempInt % 10;              // 6

    // Vis cifre på display
    for (int i = 0; i <= 3; i ++){
      seg_tal(16);
    }
    seg_tal(hundrede);
    delay(tidMellem);
    seg_tal(tiere);
    delay(tidMellem);
    seg_tal(enere);
    delay(tidMellem);
    
  }
  seg_tal(20);
}



void seg_tal(int tal){

  
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

