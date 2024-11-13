#include<iostream>
using namespace std;
main()
{
 int a=2;
 try
{
 if (a==1)
 throw a;
 else if(a==2)
 throw 'A';
 else if(a==3)
 throw 4.5;
 }
 catch(int a)
 {
 cout<<"Integer exception caught: "<<endl; 
 }
 catch (char ch)
 {cout<<"Character exception caught: "<<endl; }
 catch(double d)
 {cout<<"Double exception caught: "<<endl; }
 cout<<"End of the program."; 
 
 } 
 

