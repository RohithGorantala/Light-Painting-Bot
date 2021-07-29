#include<SPI.h>


int dac_X1 = 24;     //c12 51 X++
int dac_X2 = 28;    //c14 49  X--
int dac_Y1 = 22;     //c16 47  Y--
int dac_Y2 = 26;     //c18  45  Y++

void setup() {
  // put your setup code here, to run once:
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  pinMode(dac_X1,OUTPUT);
  pinMode(dac_X2,OUTPUT);
  pinMode(dac_Y1,OUTPUT);
  pinMode(dac_Y2,OUTPUT);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  digitalWrite(dac_X1,HIGH);
  digitalWrite(dac_X2,HIGH);  
  digitalWrite(dac_Y1,HIGH);
  digitalWrite(dac_Y2,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  REG_PIOA_CODR |= (1<<15);//pin 51 low X++
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOA_SODR |= (1<<15);
  // delay(500);
   REG_PIOD_CODR |= (1<<3);//pin 49 low X--
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<3);
  // delay(500);
   REG_PIOD_CODR |= (1<<1);//pin 45 low Y++
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<1);
  // delay(500);
   REG_PIOB_CODR |= (1<<26);//pin 47 low Y--
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOB_SODR |= (1<<26);
   //delay(500);
   delay(500);






   REG_PIOA_CODR |= (1<<15);//pin 51 low X++
    SPI.transfer(0b00111111);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b11111111);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOA_SODR |= (1<<15);
   //delay(500);
   REG_PIOD_CODR |= (1<<3);//pin 49 low X--
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<3);
   //delay(500);
   REG_PIOD_CODR |= (1<<1);//pin 45 low Y++
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<1);
   //delay(500);
   REG_PIOB_CODR |= (1<<26);//pin 47 low Y--
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOB_SODR |= (1<<26);
   //delay(500);
   delay(500);






   
   REG_PIOA_CODR |= (1<<15);//  X++
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOA_SODR |= (1<<15);
   REG_PIOD_CODR |= (1<<3);//  X--
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<3);
   
   REG_PIOD_CODR |= (1<<1);//  Y++
    SPI.transfer(0b00111111);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b11111111);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<1);
  // delay(500);
   REG_PIOB_CODR |= (1<<26);//  Y--
    SPI.transfer(0b00110000);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b00000000);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOB_SODR |= (1<<26);
   //delay(500);
   delay(500);



/* 
   REG_PIOA_CODR |= (1<<15);//pin 51 low X++
    SPI.transfer(0b00111111);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b11111111);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOA_SODR |= (1<<15);
   delay(500);
   REG_PIOD_CODR |= (1<<3);//pin 49 low X--
    SPI.transfer(0b00111111);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b11111111);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<3);
   delay(500);
   REG_PIOD_CODR |= (1<<1);//pin 45 low Y++
    SPI.transfer(0b00111111);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b11111111);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOD_SODR |= (1<<1);
   delay(500);
   REG_PIOB_CODR |= (1<<26);//pin 47 low Y--
    SPI.transfer(0b00111111);       // Refer the photo we make 5 and 6 bit 1
     //delayMicroseconds(30);
    SPI.transfer(0b11111111);
   // digitalWrite(chipselectX1, HIGH); 
   REG_PIOB_SODR |= (1<<26);
   //delay(500);
   delay(500);*/
}
