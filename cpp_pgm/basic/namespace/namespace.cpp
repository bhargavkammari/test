#include<iostream>
using namespace  std;

namespace first
{

	void fun(){cout<<"my function 1"<<endl;}

	namespace second
	{
		void fun(){cout<<"my function 2"<<endl;}
	}

}

using namespace first::second;
//using namespace first;
int main()
{
	fun();
	
}
