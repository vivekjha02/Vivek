// DIVISION OF TWO NUMBERS
#include<iostream>
using namespace std;
main()
{
	float a,b,c;
	cout<<"enter the two numbers =";
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			c=a/b;
			cout<<"division is ="<<c<<endl;
		}
	}
	catch(int i)
	{
		cout<<"division not posible"<<endl;
	}
}
