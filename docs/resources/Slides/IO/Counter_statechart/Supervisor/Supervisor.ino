#include "Arduino.h"
#include <avr/sleep.h>

#include "Statechart.h"


#define Dir_Reg DDRD
#define Port_Reg PORTD
#define Pin_Reg PIND

#define INIT 3
#define TICK 4
#define LED_PIN1 5
#define LED_PIN2 6
#define LED_PIN3 7

static Statechart statechart;


void statechart_setLight() {
	if(statechart_get_aout(&statechart) == true)
		Port_Reg |= (1 << LED_PIN1);
	else
		Port_Reg &= ~(1 << LED_PIN1);
  if(statechart_get_bout(&statechart) == true)
    Port_Reg |= (1 << LED_PIN2);
  else
    Port_Reg &= ~(1 << LED_PIN2);
  if(statechart_get_cout(&statechart) == true)
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
  
	statechart_init(&statechart); //initialize statechart

	statechart_enter(&statechart); //enter the statechart
}

// The loop function is called in an endless loop
int main()
{
  setup();
  int tick, init;
  Serial.print(Port_Reg);
  while(1)
  {
    tick = not ((Pin_Reg >> TICK) & 1);
    init = not ((Pin_Reg >> INIT) & 1);
  	if(init)
  		statechart_raise_init(&statechart);
  	if(tick)
  		statechart_raise_tick(&statechart);
    Serial.print(init);
    Serial.println(tick);
  	statechart_run_cycle(&statechart);
    
  	statechart_setLight();
    _delay_ms(300);
  }
}
