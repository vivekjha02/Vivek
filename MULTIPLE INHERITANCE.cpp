//Multiple inheritance
#include<iostream>
using namespace std;
class A
{
	public :
	int x;
	void get()
 {
  cout<<"Enter the value of x = ";
  cin>>x;	
 }
};
class B
{
	public:
	int y;
	void get1()
 {
 	cout<<"Enter the value of y = ";
 	cin>>y;
	 }};
	 class C:public A,public B
 {
 	public:
 	void sum()
 	{
 		cout<<"The sum is = "<<x+y<<endl;
 		
	 }
	 
	 void mul()
	 { cout<<"The multiplication is = "<< x*y;
		 }}
		 
		 ;
 main()
 {
 	C obj;
 	obj.get();
 	obj.get1();
 	obj.sum();
 	obj.mul();
			  }

