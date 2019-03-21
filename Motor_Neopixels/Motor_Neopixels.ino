#include <Servo.h>
Servo servo;

int pos = 0;

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif


#define PIN            6


#define NUMPIXELS      16

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup() {

  servo.attach(9);
  pixels.begin(); 
   for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(250,0,0)); 
   }

    pixels.show(); // This sends the updated pixel color to the hardware.

}
void loop() 
{
  for(pos = 0; pos < 180; pos += 1)
  {
    servo.write(pos);
    delay(20);
  }
  for (pos = 180; pos >= 1; pos -= 1)
  { 
    servo.write(pos); 
    delay (20);
  }
}
  

  
 

  
 
