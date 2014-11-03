#include<stdio.h>

unsigned  long factorial(long );
int main()
{

int  n;
unsigned  long f;
	printf("enter the value:");
	scanf("%d",&n);

	f=factorial(n);
	printf("\n%d!= %d \n",n,f);
	printf("\n");

}

unsigned long factorial(long  n)
{
	if(n==0)
	return 1;
	else
	return n * factorial(n-1);
}	
