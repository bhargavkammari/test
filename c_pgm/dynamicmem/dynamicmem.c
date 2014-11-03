#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int a=10;

	p=&a;
	printf("\n%d %d\n",*p ,a);

	p=NULL;

	printf("\n%d \n",NULL);
}
