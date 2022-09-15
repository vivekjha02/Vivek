//POINTER TO DATA MEMBER
#include<iostream>
using namespace std;
class student
{
	public:
	int a;  //data member
	void putdata()
	

{
	cout<<"a is= "<<a<<endl;
}
};
main()
{
	class student obj,*p;
	p=&obj;
	
	int student::*ptr= &student::a;
	obj.*ptr=10;
	obj.putdata();
	
	p->*ptr=20;
	p->putdata();
}
