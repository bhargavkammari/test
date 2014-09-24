/*Calculator main.c*/
#include<stdio.h>
#include"reg_calculator.h"
int addition(int a,int b)
{
	 return a+b;
}

int subtraction(int a,int b)
{
	return a-b;
}

int main()
{
	int choice;
	int n1,n2;
	printf("\nenter two values\n");
	scanf("%d %d",&n1,&n2);
	while (1)
	{
		printf("\nEnter your Choice \t1.ADD\n\t2.SUB\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				reg_callback_calculator(n1,n2,addition);
			break;
			case 2:
				reg_callback_calculator(n1,n2,subtraction);
			break;
			default:
				printf("Enter Again");
			break;
		}		
	}
}	
