#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	A()
	{
		cout<<"Enter the value of a and b= ";
		cin>>a>>b;
	}
};
class B:public A
{
    public:
	 void sum()
	 { cout<<"The sum of a and b is = "<<a+b<<endl;
		 }};
 class C
 {
 	public:
    int c;
    C()
    {
    	cout<<"Enter the value of c =";
    	cin>>c;
	}
 };
 class D:public B,public C
 {
 	public:
 	void product()
 	{
 		cout<<"The product is a, b and c = "<<a*b*c;
	 }
 };
 main()
 {
 	D obj;
 	obj.sum();
 	obj.product();
 } 
