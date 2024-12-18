#include "stm32f10x.h"                  // Device header
#include "Delay.h"


int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_InitStructure);

	while(1)
		{
			GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_RESET);
			Delay_us(1000);
			GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_SET);
			Delay_us(100);
		}
}
