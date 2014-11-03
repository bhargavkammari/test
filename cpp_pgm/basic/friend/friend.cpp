#include<iostream>
using namespace std;

class X
{
	private:
	int i;
	public: 

	 int  func()
	{
		i=12;
		return i;
	}
};

int main()
{
	X obj;
	cout<<obj.func()<<endl;	




}
