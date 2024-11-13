
//function overloading
#include<iostream>
using namespace std;
void sum()
{
 float a,b,c;
 c=a+b;
 cout<<"Sum is= "<<c<<endl;
}
void sum(float a, float b)
{
 cout<<"Sum is = "<<a+b<<endl;
}
void sum(float a, float b, float c)
{
 cout<<"Sum is ="<<a+b+c<<endl;
}
void sum(float a, float b, float c, float d)
{
cout<<"Sum is= "<<a+b+c+d<<endl;	
}
main()
{
 sum();
 sum(5.6,6.3);
 sum(5.3,6.5,7.2);
 sum(5.5,6.5,7.3,8.9);
}

