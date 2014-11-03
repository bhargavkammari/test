/* 1. Given 2 arrays A and B, find three indices i,j and k such that A[i] + A[j] = B[k] 
 * 	(Sum of two elements in the first array is an element in the second array) All inputs to be accepted as command line parameters.
 *
 * 	 	./twoArray n m a1 a2 a3 .... an b1 b2 b3 .... bm Sample if the arrays are A[7] = {1 2 3 4 5 6 7} B[6] = {11 12 34 56 67 89} 
 *
 *
 *
 * 	 		the program shall be called as 
 * 	 			./twoArray 7 6 1 2 3 4 5 6 7 11 12 34 56 67 89*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	int i;
	int j;
	int k;
} Result;

int examine(int value, int A[], int size,int i,int j )
{
	int k;
	for(k= 0; k < size; k++)
	{
		if(value == A[k])
		{
			printf("\n index of first array: %d %d  second array index:%d \n",i,j,k);
			return k;
		}
	}

	return -1;
}

void syntax(char *exeName)
{
	printf("invalid call method.\n Syntax: %s i j a1 a2 ... an b1 b2 ... bn\n Where i is size of first array j is size of second array. ",exeName);
}

int main(int argc, char* argv[])
{
	if(argc < 3)
	{
		printf("\n34\n");
		syntax(argv[0]);
		return -1;
	}

	if(argv[1] == 0 || argv[2] == 0)
	{
		printf("\n41\n");
		syntax(argv[0]);
		return -1;
	}

	int sizeOfFirstArray =atoi(argv[1]);
	int sizeOfSecondArray =atoi(argv[2]);
	

	if( (sizeOfFirstArray + sizeOfSecondArray + 3) != argc)
	{
		printf("\n51\n");
		syntax(argv[0]);
		return -1;
	}

	int i, j, k, index;
	int fA[sizeOfFirstArray];
	int sA[sizeOfSecondArray];

	Result result[sizeOfFirstArray/2];

	// inialize data

	 for(i=0;i<sizeOfFirstArray;i++)
	 {
		 fA[i]=atoi(argv[3+i]);
	 }
	
	 j=3+sizeOfFirstArray;
	 for(i=0;i<sizeOfSecondArray;i++)
	 {
		 sA[i]=atoi(argv[j+i]);
	 }
	
	 memset(result, 0x00,sizeof(Result)*(sizeOfFirstArray/2));
	
	 index = -1;
	
	 //Do actual examination of task.
	 for(i=0;i<sizeOfFirstArray-1;i++)
	 {
	 	for(j=i+1;j<sizeOfFirstArray;j++)
	 	{
	 	k = examine(fA[i]+fA[j], sA, sizeOfSecondArray,i,j);
	 		if(-1 !=k)
	 		{
	 		index++;
	 		result[index].i = i;
			result[index].j = j;
	 		result[index].k = k;
	 		}
	 	}
	 }
	
	 // Print result
	 if(-1 == index)
	 {
		 printf("No result");
	 }

	 printf("\n");
	 return 0;
}
