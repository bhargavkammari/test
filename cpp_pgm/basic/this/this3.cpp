#include<iostream>
using namespace std;
 
class Test
{
private:
  int x;
  int y;
public:
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
  //static void fun1() { cout << "Inside fun1()"; }
  //static void fun2() { cout << "Inside fun2()"; this->fun1(); }
   void fun1() { cout << "Inside fun1()"<<endl; } //fixed this issue
   void fun2() { cout << "Inside fun2()"<<endl; this->fun1(); }//fixed this issue
};
 
int main()
{
  Test obj;
  obj.fun2();
  return 0;
}
