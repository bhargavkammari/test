#include<stdio.h>

int main()
{
	int i;

	for (i=0;i<5;i++)
	{
	//	static int a=10;
		 int a=10;
		
		printf(" %d ",a++);
	}
	printf("\n");
}
