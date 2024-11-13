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
class B: public A
{
	public:
	int y;
	void get1()
 {
 	cout<<"Enter the value of y = ";
 	cin>>y;
	 }};
	 class C: public B
 {
 	public:
 	int z;
 	void get2()
 	{
 		cout<<"Enter the value of z = ";
 	cin>>z;
	 }
	
	 
	 void mul()
	 { cout<< x*y*z;
		 }}
		 
		 ;
 main()
 {
 	C obj;
 	obj.get();
 	obj.get1();
 	obj.get2();
 	obj.mul();
			  }
