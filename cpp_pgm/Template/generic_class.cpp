#include<iostream>
using namespace std;

const int SIZE=10;
template<class stackType>class stack
{
	stackType arr[SIZE];
	int tos;

	public:
	stack(){tos=0;}
	
	void push(stackType obj);
	stackType pop();
};


template<class stackType>void  stack<stackType>::push(stackType obj)
{

	if(tos == SIZE)
	{
		cout<<"stack is full \n";
		return;
	}
	arr[tos]=obj;
	tos++;
}

template<class stackType>stackType stack<stackType>::pop()
{

	if(tos==0)
	{
		cout<<"stack is empty\n";
		return 0;
	}
	
	tos--;	
	return arr[tos];

}

int main()
{

	stack<int> s1;
	
	int i;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);

	for(i=0;i<3;i++)
	cout<<"POP S1:"<<s1.pop()<<endl;

}
