#include<iostream>
using namespace std;

template<class type1,class type2>

void myfunction(type1 X, type2 Y)
{
	cout<<X<<' '<<Y<<endl;
}


int main()
{


	myfunction(10,"I like C++");
	myfunction(1,10.5);
}

