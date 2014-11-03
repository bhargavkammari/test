#include<stdio.h>
#include<string.h>
typedef struct myst
{
	int a;
	char b[10];
}myst;

void cbfun(myst *st)
{
	fprintf(stdout,"called %d %s",st->a,st->b);
}	

int main()
{
	void (*callback)(void*);

	myst m;
	m.a=10;
	strcpy(m.b,"123");

	callback=(void*)cbfun;

	callback(&m);
	printf("\n");
}
