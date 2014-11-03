#include<iostream>
using namespace std;


template<class X>
void swapargs(X &a, X &b)
{

	X temp;
	temp =a;
	a=b;
	b=temp;
}


int main()
{

	int i=10,j=20;
	char a='x',b='y';
	
	swapargs(i,j);
	swapargs(a,b);

	cout<<"swaped i,j"<<' '<<i<<' '<<j<<endl;;
	cout<<"swaped a,b"<<' '<<a<<' '<<b<<endl;

	return 0;

}
