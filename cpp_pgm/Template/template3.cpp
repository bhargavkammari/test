#include<iostream>
using namespace std;

template<class X>
void fun(X a)
{
	cout<<"inside  one arg fun"<<endl;
}

template<class X,class Y>
void fun(X a,Y b)
{
	cout<<"inside two arg fun"<<endl;
}

int main()
{
	
	fun(10);
	fun(10,20);

}
