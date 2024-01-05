#include "Arduino.h"
#include <avr/sleep.h>
#include <avr/io.h>

#include "counter.c"
#include "counter_types.h"

Counter__main_mem mem;
Counter__main_out _res;

#define Dir_Reg DDRD
#define Port_Reg PORTD
#define Pin_Reg PIND

#define INIT 3
#define TICK 4
#define LED_PIN1 5
#define LED_PIN2 6
#define LED_PIN3 7


void counter_setLight() {
	if(_res.aout == 1)
    Port_Reg |= (1 << LED_PIN1);
	else
		Port_Reg &= ~(1 << LED_PIN1);
  if(_res.bout == 1)
    Port_Reg |= (1 << LED_PIN2);
  else
    Port_Reg &= ~(1 << LED_PIN2);
  if(_res.cout == 1)
    Port_Reg |= (1 << LED_PIN3);
  else
    Port_Reg &= ~(1 << LED_PIN3);
}

//The setup function is called once at startup of the sketch
void setup()
{
  Serial.begin(9600);

  Dir_Reg = (Dir_Reg & ~(1<< INIT | 1 << TICK)) | (1 << LED_PIN1 | 1 << LED_PIN2 | 1 << LED_PIN3);
  Port_Reg =  (Port_Reg & ~(1 << LED_PIN1 | 1 << LED_PIN2 | 1 << LED_PIN3)) | (1<< INIT | 1 << TICK);
  Counter__main_reset(&mem);
}
  
// The loop function is called in an endless loop
int main()
{
  setup();
  int tick, init;
  
  while(1)
  {
    tick = not ((Pin_Reg >> TICK) & 1);
    init = not ((Pin_Reg >> INIT) & 1);

    Serial.print(init);
    Serial.println(tick);
	  Counter__main_step(init, tick, &_res, &mem);
  
	  counter_setLight();
    _delay_ms(300);
  }
	
}
