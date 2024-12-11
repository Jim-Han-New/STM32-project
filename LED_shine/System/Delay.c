#include "stm32f10x.h"                  // Device header


void Delay_us(uint32_t us)
{

   u16 i=0;  
   while(us--)
   {
      i=12000;  //自己定义
      while(i--) ;    
   }
}
