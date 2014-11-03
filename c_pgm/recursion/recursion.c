#include<stdio.h>

void recursion(int count)
{
	printf("\n\t%d",count);
	if (count<10)
	{
		recursion(count + 1);
	}
}

int main()
{
	recursion(1);
}	
