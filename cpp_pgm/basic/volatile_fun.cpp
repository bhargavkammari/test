#include<iostream>
using namespace std;

class A
{
	public:
	void f() const volatile {}
	void g(){}
};

int main()
{
	 A const  obj;

	obj.f();
}
