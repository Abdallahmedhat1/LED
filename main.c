/*
 * LED.c
 *
 * Created: 7/2/2023 2:08:46 PM
 * Author : Abdallah Medhat
 */ 

#include <util/delay.h>
#include "LED_interface.h"


int main(void)
{
    LED_Type LED1={LED_PORTA,LED_PIN0,ACTIVE_HIGH};
		
		  LED_Type LED2={LED_PORTA,LED_PIN1,ACTIVE_HIGH};
			  
			    LED_Type LED3={LED_PORTA,LED_PIN2,ACTIVE_HIGH};
					
					
					  LED_Init(LED1);
					      LED_Init(LED2);
						    LED_Init(LED3);
		
    while (1) 
    {
		        s8 counter=1;
		               while(1)
		               {
						   
						   
		             	if(counter % 1==0)
			             {
				   
				            LED_Toggle(LED1);
			               }
			  
			
			if(counter % 2==0)
			  {
				  
				LED_Toggle(LED2);
			 }
			
			               if(counter % 3==0)
			                    {
			                      	LED_Toggle(LED3);
			                            }
			
			counter++;
			_delay_ms(1000);
		}
		
    }
}

