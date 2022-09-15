//pointers
#include<iostream>
using namespace std;
main()
{ 
int a=10;
cout<<a<<endl;  //10

int *p;
p=&a;
cout<<p<<endl;  //address of a 
cout <<*p<<endl;  //value at that address

int **p1;
p1=&p;
cout<<p1<<endl; //address of p
cout<<**p1;
}
