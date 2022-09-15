//types of pointers
//wild pointer
#include<iostream>
using namespace std;
main()
{ 
int *p;
cout<<p<<endl;  //garbage value -> wild pointer

int a=10;
p=&a; //valid pointer
}

