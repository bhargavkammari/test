#include<stdio.h>
/*int main()
{

	long int i=0,j=1,f;
	int n,k;

	printf("enter the number range:\n");
	scanf("%d",&n);

	printf("Fibnacci Series: %ld %ld",i,j);

	for (k=2;k<n;k++)
	{
		f=i+j;
		i=j;
		j=f;
		printf(" %ld",j);
	}
	printf("\n");
	return 0;

}*/

/*int main()
{
	long int arr[40];
	int i,range;

	printf("Enter the Number Range:");
	scanf("%d",&range);
	
	arr[0]=0;
	arr[1]=1;

	for(i=2;i<range;i++)
	{
		arr[i]=arr[i-1] + arr[i-2];
	}
	printf("\n Fibancci Series is:");

	for(i=0;i<range;i++)
	{
		printf(" %ld ",arr[i]);
	}
printf("\n");

}*/

int fibanacci( int );
int main()
{
	int y=0;
	int i,n;
	printf("Enter the range:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf(" %ld ",fibanacci(y));
		y++;
	}
	printf("\n");
}

int fibanacci(int val)
{
	if (val ==  0)
		return 0;
	else if (val == 1)
		return 1;
	else
		return fibanacci(val-1) + fibanacci(val-2);
}	
