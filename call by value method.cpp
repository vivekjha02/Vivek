//call by value method
#include<iostream>
using namespace std;
int add(int a, int b) //function definition
{
	int c;
  c=a+b;
 return c;

}
int mul(int a, int b)
{
	int m;
	m=a*b;
	return m;
}
	main()
{
	int a,b,s,t;
	cin>>a>>b;  //5 6
	s=add(a,b);  //fn calling add(5,6)
	t=mul(a,b);
	cout<<s<<endl<<t;
	
}
