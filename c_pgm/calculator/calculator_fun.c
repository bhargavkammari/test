#include<stdio.h>
#include"reg_calculator.h"
void reg_callback_calculator(int a,int b,callback ptr_register_callback_calculator)
{
	printf("\n\tResult:%d\n",(*ptr_register_callback_calculator)(a,b));
}

