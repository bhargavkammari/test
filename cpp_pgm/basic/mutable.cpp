#include<iostream>
using namespace std;

class x
{
 	mutable int i;
	public:
	int geti()const
	{
		return i;
	}
	void seti(int y)const
	{
		i=y;
	}
};


int main()
{
	x obj;
	obj.seti(100);
	cout<<obj.geti()<<endl;
	return 0;
}
