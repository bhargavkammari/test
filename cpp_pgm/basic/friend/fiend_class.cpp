#include<iostream>
using namespace std;

class Y;
class X
{

	public:
	friend class Y;
	
	private:
	int i;
	
	public:
	X():i(0){}
	void funcx(){cout<<"class X function i:"<<i<<endl;}
};

class Y
{
	public:
	void funcy(X& xobj,int val)
	{
		xobj.i=val;
		cout<<"class Y function"<<endl;
	}
};


int main()
{

	X objx;
	Y objy;

	objx.funcx();
	objy.funcy(objx,50);
	objx.funcx();
	

}
