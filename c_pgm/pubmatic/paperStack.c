/*2. You are given n sheets of paper. 
 * 	A sheet of paper "A" can be stacked on top of another "B" if length(A) < length(B) and width(A) < width(B). 
 * 		Calculate the height of tallest stack that could be formed out of the given sheets by stacking them on top of each other.
 * 			All inputs to be accepted as command line parameters.
 *
 * 				./paperStack n l1 w1 l2 w2 l3 w3 ..... ln wn 
 *
 * 				Ex: For 4 sheets of paper with dimensions as p1(10,20) p2(13,15) p3(2,45) and p4(56,9) the program shall be called as 
 * 				./paperStack 4 10 20 13 15 2 45 56 9*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	int l;
	int w;
}PS; 

int examine()
{

	return -1;
}

void syntax(char *exeName)
{
	printf("invalid call method.\n Syntax: %s i j a1 a2 ... an b1 b2 ... bn\n Where i is size of first array j is size of second array. ",exeName);
}

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		syntax(argv[0]);
		return -1;
	}

	if(argv[1] == 0 || argv[2] == 0)
	{
		syntax(argv[0]);
		return -1;
	}

	int sizeOfFirstArray =atoi(argv[1]);
	

	if( (sizeOfFirstArray + 2) != argc)
	{
		syntax(argv[0]);
		return -1;
	}

	int i, j, k, index;
	PS fA[sizeOfFirstArray];

	PS result[sizeOfFirstArray/2];

	// inialize data

	 for(i=0;i<sizeOfFirstArray;i++)
	 {
		fA[i].l = atoi(argv[2+i]);
		j=i+1;
		fA[i].w = atoi(argv[2+j]);
	 }
	
	 memset(result, 0x00,sizeof(PS)*(sizeOfFirstArray/2));
	
	 index = -1;
	
	 	//Do actual examination of task.
	 	/*for(i=0;i<sizeOfFirstArray-1;i++)
		 {
	 		k = examine(fA[i],)
		 }*/
	
	 // Print result
	 /*if(-1 == index)
	 {
		 printf("No result");
	 }*/

	 printf("\n");
	 return 0;
}
