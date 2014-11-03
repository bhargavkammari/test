#include <iostream>
using namespace std;

class X
{
	public:
			X(){ 
					 cout << "Constructor called!" <<endl; 
				 }	
		   
			~X() { 
		            cout << "Destructor called!" <<endl; 
				  }
};

int main( )
{
	   //X *obj = new X[4];
    //	  delete [] obj; // Delete array

		int *p=new int;
		*p=10;
	
		cout<< *p<<endl;

		return 0;
}
