#include<stdio.h>
int fibonacci(int val)
{
	if(val == 0){ return 0;}
	else if(val == 1){ return 1;}
	else{return fibonacci(val -1) + fibonacci(val-2);}
}

int main()
{

	int val,result;
	printf("\nenter the number:\n");
	scanf("%d",&val);
	
	result = fibonacci(val);
	printf("The %d number in fibonacci series is %d\n", val, result);
	
	printf("\n");
}

