//Static variable in function
//1.Static variable in functions
//	->static variables when used inside function are initilized only once, and then they hold there value even through function calls
//
//	These static variables are stored on static storage area, not in stack.
#include<iostream>
using namespace std;

void counter()
{
	static int count=0;
	cout<< count ;
	count++;

}

int main()
{
	int i;
	for (i=0;i<5;i++)
	{
		counter();
	}
	cout<<endl;
}
