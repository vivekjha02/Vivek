//sum of two numbers

#include<iostream>
using namespace std;
void add(); //function prototype

main()
{
add(); //function Calling	
}
void add() //fn definition
 {
 int a,b,c;
 cout<<"enter two numbers=";
 cin>>a>>b;
 c=a+b;
 cout<<c;
}
