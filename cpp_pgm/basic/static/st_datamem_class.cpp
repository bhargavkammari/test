//Static data member in class
//3.Static data member in class
//	->Static data members of class are those members whih are shared by all the objects. it has a single piece of storage, and is not available as separate copy with each object, like other non-static data members.
//
//	->Static member variables are not initilized using constructor ,bcz these are not dependent on object initialization.
//
//	->also ,it must initialized explicitly,always outside the class.If not initilized, Linker will give error
//
//	->once the definition for static data member is made,user cannot redefine it. Though, arithmetic operations can be performed on it.
#include<iostream>
using namespace std;

class X
{	
  	static int i;
	public:
  	X()
	{
	//	i=14;
		cout<<"constructor"<<i<<endl;
	}
	~X()
	{
		cout<<"distructor"<<endl;
	}
};	

int X::i=12;
int main()
{

	X obj;
//	cout<<X::i<<endl;
}
