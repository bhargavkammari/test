#include<iostream>
using namespace std;

class X
{

	public:

	X(int x=0){cout<<"constructor"<<x<<y<<endl;}
	~X(){cout<<"destructor"<<endl;}
};


int main()
{

	X obj(30,40);

	X obj1;
}
