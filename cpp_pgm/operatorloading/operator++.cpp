#include<iostream>
using namespace std;

class X
{
	int i,j;
	public: 
	X():i(0),j(0){cout<<"constructor"<<endl;}

	X(int x,int y) 
	{
		cout<<"parameter constructor"<<endl;
		i=x;j=y;
	}	

	void show()
	{
		cout<<i<<"  "<<j<<endl;
	}

	X operator++();
};

X X::operator++()
{
	cout<<" operator++ Pre increment "<<endl;
		 	
	++i;
	++j;
	return (*this);
}

X X::operator++(int x)
{
	cout<<" operator++ Post increment "<<endl;
	
}

int main()
{

	X obj1(10,20),obj2(30,40);
	obj1.show();
	obj2.show();
	X obj3;
	obj3=++obj2;	

	obj3.show();
}
