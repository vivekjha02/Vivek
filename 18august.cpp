//sum of two numbers
#include<iostream>
using namespace std;
int add(int a, int b) //function definition
{
	int c;
  c=a+b;
 return c;

}
	main()
{
	int a,b,s;
	cin>>a>>b;  //5 6
	s=add(a,b);  //fn calling add(5,6)
	cout<<s;
	
}
