//VIRTUAL DESTRUCTOR
#include<iostream>
using namespace std;
class base
{
 public:
 base()
 {
  cout<<"base class constructor"<<endl;
 }
virtual ~base()
 {
  cout<<"base class destructor"<<endl;
 }
};
class derived:public base
{
 public:
 	derived()
{ cout<<"derived class constructor"<<endl;
	 }
~derived()
{
 cout<<"derived class destructor"<<endl;
}
};
main()
{
 base *p= new derived; //base*p; derived obj; p=&obj;
 delete p;
}
