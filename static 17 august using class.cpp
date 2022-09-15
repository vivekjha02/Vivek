#include<iostream>
using namespace std;
class A
{
	public:
	static int a;
		void sum()
{
	a++;
	cout<<a<<endl;
		}
};
int A::a=1;
main()
{
	class A obj1,obj2,obj3,obj4;
	obj1.A::sum();  //2
	obj2.sum(); //3
	obj3.sum(); //4
	obj4.sum(); //5
}
