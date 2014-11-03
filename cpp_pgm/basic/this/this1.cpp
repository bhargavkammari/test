#include<iostream>
using namespace std;

class Test
{

	int i,j;
	public:
	Test(int x=0,int y=0){this->i=x;this->j=y;}
	
	Test &seti(int a){i=a; return *this;}
	Test &setj(int b){j=b;return *this;}
	void print(){ cout<<"i val:"<<i<<endl<<"j val:"<<j<<endl;}
};

int main()
{

	Test obj(5,5);
	
	obj.print();
	
	obj.seti(10).setj(20);
	
	obj.print();
}
