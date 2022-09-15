#include<iostream>
using namespace std;
main()
{
	int a=10;
	cout<<a;  //10
	cout<<&a; //address of a
	
	int *b;
	b=&a;
	cout<<b; //address of a
	cout<<*b;  //value at that address -> INDIRECTION OF POINTER
	}
