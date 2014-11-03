//non member function access to the private member of a class using friend
//note: we declare friend function prototype in class public or private
#include<iostream>
using namespace std;

class X
{
	//protected: //private: //both
	int i;
	public:
	friend void func(X);
};

void func(X obj)
{
	obj.i=122;
	cout<<obj.i<<endl;
}

int main()
{

	X obj;
	func(obj);
}
