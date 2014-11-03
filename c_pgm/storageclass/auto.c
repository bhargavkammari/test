#include<stdio.h>
/*
 *1.auto variable by default value is garbage
 *2.accesing  prority is locally means scope is with in the block.  
 *3.scope is entire the program
 * */

int a=10;
int main()
{
	{
		a=20;
		printf("\ninner______a:%d____\n",a);
	}
	
	printf("\nouter______a:%d____\n",a);
	printf("\n");
}
