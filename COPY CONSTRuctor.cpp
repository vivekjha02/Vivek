//Copy constructor
#include<iostream>
using namespace std;
class counter
{
int c;
public:
	counter();  //default constructor
	counter(int a)  //parametrized constructor    //a=5
	{
	 c=a;
	}
	counter(counter &ob)  //copy constructor
	{
	cout<<"copy constructor called= ";
	c=ob.c;
	}
	
void show()
{
	cout<<c<<endl;
}};
main()
{
	class counter obj1(5);
	obj1.show();  //5
	
	class counter obj2(obj1);
	obj2.show();
}
