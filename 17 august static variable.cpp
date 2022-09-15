//
#include<iostream>
using namespace std;
void add()
{
static int a=1; //do not initialize again and again
	a++;
	cout<<a<<endl;
}
main()
{
	add(); //2
	add(); //3
   	add(); //4
}

