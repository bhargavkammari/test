//Static Member Function
//->These functions work for the class as whole rather than for a particular object of a class.
//
//->it can called using an object and the direct member access .operator. But ,it's more typical to call a static member function
//	by itself, using class name and scope resolution :: operator.
//
//->These functions cannot access ordinary data members & member fucntions , But only static data members
//		and static member functions.
//
//-> it doesn't have any "this" keyword which is the reason it cannot access ordinary members.
#include<iostream>
using namespace std;

class X
{
	static	int i;
	public:
    static void func()
	{
		i=10;
		cout<<"func():"<<i<<endl;
	}
};

int X::i=0;

int main()
{
	 X obj;

	obj.func();
}
