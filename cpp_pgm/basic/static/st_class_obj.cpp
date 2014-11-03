//static class object
//2.Static Class Objects
//	->Objects declared static are allocated storage in static storage area,scope till end of program.
//	->static objects are also initilized using constructors like other normal objects. 
//	Assignment to zero, on using static keyword is only for primitive datatypes, not for user defined datatypes.


#include<iostream>
using namespace std;

class X
{
	public: 
		X()
		{
			cout<<"constructor"<<endl;
		}
		~X()
		{
			cout<<"destructor"<<endl;
		}
};

void f()
{
static  X obj;
}

int main()
{
	f();
	cout<<"ending..."<<endl;
}


/*
 * o/p: static object 
 *
 * constructor
 * ending...
 * destructor*/

/*
 * o/p: non-static object
 *constructor
 *destructor
 *ending...
 * */
