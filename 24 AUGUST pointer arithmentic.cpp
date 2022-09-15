//types of pointers
//pointer arithmetic
#include<iostream>
using namespace std;
main()
{
 int a=10;
 int *p;
 p=&a;
 cout<<"address of a="<<p<<endl;
 
 p=p+4;
 cout<<"Updated adress="<<p<<endl;
 cout<<"Value at updated address="<<*p<<endl;  //garbage value
 
 *p=30;
 cout<<"value ="<<*p; //30
}
