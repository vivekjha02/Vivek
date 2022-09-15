//types of pointers
//dangling pointer
#include<iostream>
using namespace std;
main()
{
 int a=10;
 int *p;
 {
 p=&a;
 }
 cout<<p;
}
