//explicitly overloadingf a genaric function
#include<iostream>
using namespace std;

template<class X>
void swapargs(X &a,X &b)
{
	cout<<"generic function"<<endl;
	X temp;
	temp =a;
	a=b;
	b=temp;
}


//template< >void swapargs<int >(int &a,int &b)
void swapargs(int &a,int &b)
{
	cout<<"normal function"<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{


	int i=10,j=20;
	char a='x',b='y';

	swapargs(i,j);//explicitly overloadded
	cout<<i<<' '<<j<<endl; 
	swapargs(a,b);//implicitly overloadded 
	cout<<a<<' '<<b<<endl;
}


