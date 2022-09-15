//call by REFERENCE
//swap two numbers
#include<iostream>
using namespace std;
void swap(int &x , int &y)  //p1-> address of a, p2-> address of b
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"a after swapping="<<x<<endl;
	cout<<"b after swapping="<<y<<endl;
}
main()
{
	int a,b;
	cout<<"enter two numbers=";
	cin>>a>>b;
		cout<<"a before swapping="<<a<<endl;
	cout<<"b before swapping="<<b<<endl;
	cout<<"a after swapping in the main="<<a<<endl;
	cout<<"b after swapping in the main="<<b<<endl;
	swap(a,b);
	
}
