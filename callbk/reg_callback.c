/*reg_callback.c*/
#include<stdio.h>
#include"reg_callback.h"

void register_callback(callback ptr_register_callback)
{
	printf("\n/******Inside register_callback******/ \n");
	(*ptr_register_callback)();
}
