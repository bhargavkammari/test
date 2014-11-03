/*changing entry point of program or calling function before main*/
#include<stdio.h>
#include<stdlib.h>

void india();
void usa();
void main();

void india()
{
	printf("\n I am in India\n");
	main();
	exit(0);
}
void main()
{
	printf("\n I am in Main\n");
}

void usa()
{
	printf("\nI am in Usa\n");
}
