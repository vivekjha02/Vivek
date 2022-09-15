//call by address
//swap two numbers
#include<iostream>
using namespace std;
void swap(int *p1 , int *p2)  //p1-> address of a, p2-> address of b
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	cout<<"a after swapping="<<*p1<<endl;
	cout<<"b after swapping="<<*p2<<endl;
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
	swap(&a,&b);
	
}

