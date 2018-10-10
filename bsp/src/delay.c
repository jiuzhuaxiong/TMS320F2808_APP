/********************************************************
 *文件名:delay.c
 *创建时间:2018-10-09
 *作者: 皇甫仁和
 ********************************************************/
#include "delay.h"
void delay_us(unsigned long int nus)
{
	while(nus)
	{
		DELAY_US(1);
		nus--;
	}
}
void delay_ms(unsigned long int nms)
{
	while(nms)
	{
		DELAY_US(1000);
		nms--;
	}
}

void delay_s(unsigned long int ns)
{
	while(ns)
	{
		delay_ms(1000);
		ns--;
	}

}

void delay(unsigned long int i)
{
	while(i)
	{
		i--;
	}
}
