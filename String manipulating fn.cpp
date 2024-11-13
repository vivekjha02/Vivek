//string manipulating fn

#include<iostream>
#include<string.h>
using namespace std;
main()
{

string s1("QUICK! Send for count");
string s2("LORD");
string s3("Don't");
//erase
s1.erase(0,7);  //s1 = Send for count
cout<<s1<<endl;

//replace
s1.replace(9, 5 , s2); //s1=Send for LORD
cout<<s1<<endl;
s1.replace(0, 1 , "s");  //s1= send for LORD
cout<<s1<<endl;

//insert
s1.insert(0,"AAJA");  //Don'tsend for LORD
cout<<s1<<endl;

//append
s1.append(3, '!'); //Don'tsend for LORD !!!
cout<<s1;
}
