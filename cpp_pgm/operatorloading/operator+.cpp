#include<iostream>
using namespace std;

class X
{
	int i,j;
	public: 
	X(){cout<<"constructor"<<endl;}

	X(int x,int y)
	{
		cout<<"parameter constructor"<<endl;
		i=x;j=y;
	}	

	void show()
	{
		cout<<i<<"  "<<j<<endl;
	}

	X operator+(X &obj);
};

X X::operator+(X &obj)
{
	cout<<" operator+ "<<endl;
	X objt;

	objt.i=obj.i+i;
	objt.j=obj.j+j;
	return objt;
}

int main()
{

	X obj1(10,20),obj2(30,40);
	obj1.show();
	obj2.show();
	
	X obj3(10,20);
	obj3=obj1+obj2;

	obj3.show();
}
