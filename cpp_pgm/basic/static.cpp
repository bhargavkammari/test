#include<iostream>
using namespace std;


class A
{
	public:
 static  int i;
	//	int x=120;
	A(){i=100;}
};



int main()
{
	A obj;
	cout<<obj.i<<endl; 
	
}
