#include <msp430.h>
#include "led.h"
#include "buzzer.h"
#include "libTimer.h"
#include <stdio.h>
#include <stdlib.h>


int main(void){
  configureClocks();		/* setup master oscillator, CPU & peripheral clocks */
  led_init();
  switch_init();
  enableWDTInterrupts();/* enable periodic interrupt */

  or_sr(0x18);
}
