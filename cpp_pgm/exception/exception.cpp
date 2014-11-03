#include<iostream>
using namespace std;

int main()
{

	cout<<"start\n";
	try
	{
		cout<<"Inside try block..\n";
		throw 'A';
	}

	catch(int  i)
	{
		cout<<"caught on exception\n";
		cout<<i<<"\n";
	}
	
	 catch(...)
		      {
			          cout<<"Default catch statement\n";
			      }

}
