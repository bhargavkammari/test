/*Callback.c file*/
#include<stdio.h>
#include"reg_callback.h"

void my_callback(void)
{
	printf("\n/******Main Inside My_callback****/\n");
}	

int main()
{
	printf("\n/*******Main Function START********/\n");
	callback ptr_my_callback = my_callback;
	printf("\nthis program demonstrating function callback\n");
	register_callback(ptr_my_callback);
		
}

