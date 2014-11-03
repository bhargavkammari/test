#include<stdio.h>
#include"one.h"
int main()
{
	int var_one=10;
	int choice;
	int  (*cal)(int);//function pointer
	printf("this is  one.c file \n");
	
	printf("\n*******Select The Option******\n");
	printf("\t\t1.ADD\n\t\t2.SUB\n");
	scanf("%d",&choice);

	switch(choice)
	{
	
		case 1: 
				cal=ADD;
				printf("\nADD:%d\n",(*cal)(var_one));
			break;
		case 2:
				cal=SUB;
				printf("\nSUB:%d\n",(*cal)(var_one));
			break;
		
		default:
			printf("\nthis is the default case\n");
			break;

	}

	printf("\n");
}
