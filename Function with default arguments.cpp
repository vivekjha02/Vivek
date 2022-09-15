//Function with default arguments
#include<iostream>
using namespace std;
void fn(int a, int b, int c=0, int d=0) //a=5, b=6 , c=7, d=0 default d
{
	cout<<a+b+c+d<<endl;
}
main()
{
	fn(5,6,7);
	fn(3,6);
}
