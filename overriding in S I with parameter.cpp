#include<iostream>
using namespace std;
class A
{
 int a;
 public:
 void get(int x)
{
	a=x;
	cout<<"a is = "<<a;
	}	
};
class B:public A
{
 int b;
 public:
 void get(int y)
 {
  b=y;
  cout<<"b is = "<<b;
	 }	
};
main()
{
 B obj;
 obj.get(10);

}
