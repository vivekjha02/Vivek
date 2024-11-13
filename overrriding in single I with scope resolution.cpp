#include<iostream>
using namespace std;
class A
{
 public:
 void show()
{
	cout<<"class A";
	}	
};
class B:public A
{
 public:
 void show()
 {
  cout<<"class B";	
	 }	
};
main()
{
 B obj;
 obj.show();
 cout<<endl;
 obj.A::show();	//removal for overriding ::
}

