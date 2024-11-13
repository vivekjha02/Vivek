//single inheritance
#include<iostream>
using namespace std;
class A
{
	public :
	int a;
	void get()
 {
  cout<<"Enter the value of a = ";
  cin>>a;	
 }
};
class B:public A
{
	int b;
	public:
	void get1()
 {
 	cout<<"Enter the value of b = ";
 	cin>>b;
	 }
	 void sum()
	 { cout<<a+b;
		 }};
 main()
 {
 	B obj;
 	obj.get();
 	obj.get1();
 	obj.sum();
			  }		 	


