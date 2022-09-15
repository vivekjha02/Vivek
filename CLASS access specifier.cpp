// CLASS , access specifier
#include<iostream>
using namespace std;
class A
{
	public:    //Access specifier
	int a;
	float b;
};
main()
{
	class A obj;
	obj.a=10;
	obj.b=10.5;
	cout<<"a is ="<<obj.a;
	cout<<"b is ="<<obj.b;

}
