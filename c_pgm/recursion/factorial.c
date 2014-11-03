#include<stdio.h>
int main()
{
unsigned long  number,i=1;
unsigned long  f=1;
	printf("enter the number:");
	scanf("%d",&number);

	while(i<=number)
	{
		f=f*i;
		i++;
	}

	printf("factorial of %d is: %lu",number,f);
	printf("\n");
}
