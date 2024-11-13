//Hierarichical inheritance
#include<iostream>
using namespace std;
class A
{
	public :
	int x,y;
	void get()
 {
  cout<<"Enter the value of x and y = ";
  cin>>x>>y;	
 }
};
class B: public A
{
 public:
 void sum()
 {
 	cout<<"Sum of x and y is = "<<x+y<<endl;
 	
	 }	
};
class C: public A
{
public:
	void mul()
	{
	 cout<<"Multiplication of x and y is = "<<x*y;
	 
	}
};
main()
{
	B obj;
	obj.get();
	obj.sum();
	C obj1;
	obj1.get();
	obj1.mul();
}
