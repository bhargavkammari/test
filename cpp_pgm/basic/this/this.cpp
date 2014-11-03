#include<iostream>
using namespace std;

class X
{

	int i;
	public:
	void set(int i)
	{
		this->i=i;
	}

	void print(){cout<<"i val:"<<i<<endl;}	

};

int main()
{

	X obj;
	int val=20;
	
	obj.set(val);
	obj.print();

}
