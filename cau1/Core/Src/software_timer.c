/*
 * software_timer.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ASUS
 */

#include "software_timer.h"

int timer1_flag = 0;		// control road 1
int timer1_counter = 0;

int timer2_flag = 0;		// control road 2
int timer2_counter = 0;

int timer3_flag = 0;		// control count road 1
int timer3_counter = 0;

int timer4_flag = 0;		// control count road 2
int timer4_counter = 0;

int timer5_flag = 0;		// control EN0 EN1
int timer5_counter = 0;

int timer6_flag = 0;		// led blink
int timer6_counter = 0;

int TIMER_CYCLE = 10;

void setTimer1(int duration)
{
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}

void setTimer2(int duration)
{
	timer2_counter = duration / TIMER_CYCLE;
	timer2_flag = 0;
}

void setTimer3(int duration)
{
	timer3_counter = duration / TIMER_CYCLE;
	timer3_flag = 0;
}

void setTimer4(int duration)
{
	timer4_counter = duration / TIMER_CYCLE;
	timer4_flag = 0;
}

void setTimer5(int duration)
{
	timer5_counter = duration / TIMER_CYCLE;
	timer5_flag = 0;
}

void setTimer6(int duration)
{
	timer6_counter = duration / TIMER_CYCLE;
	timer6_flag = 0;
}

void timeRun()
{
	if(timer1_counter > 0)
	{
		timer1_counter--;
		if(timer1_counter <= 0)
			timer1_flag = 1;
	}

	if(timer2_counter > 0)
	{
		timer2_counter--;
		if(timer2_counter <= 0)
			timer2_flag = 1;
	}

	if(timer3_counter > 0)
	{
		timer3_counter--;
		if(timer3_counter <= 0)
			timer3_flag = 1;
	}

	if(timer4_counter > 0)
	{
		timer4_counter--;
		if(timer4_counter <= 0)
			timer4_flag = 1;
	}

	if(timer5_counter > 0)
	{
		timer5_counter--;
		if(timer5_counter <= 0)
			timer5_flag = 1;
	}

	if(timer6_counter > 0)
	{
		timer6_counter--;
		if(timer6_counter <= 0)
			timer6_flag = 1;
	}
}
