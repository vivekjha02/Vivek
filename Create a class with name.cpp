//average marks with constructor
#include<iostream>
using namespace std;
class student
{ public:
	int rollno;
	int p,c,m;
	char name[30];
 student()
 {
 	cout<<"enter the rollno and name=";
 	cin>>rollno>>name;
 	cout<<"Enter the marks of phy che maths = ";
 	cin>>p>>c>>m;
	 }	
 void average()
 {
 	float avg;
 	avg=(p+c+m)/3;
 	cout<<" Average is = "<<avg;
	 }};
main()
{
	class student obj;
	obj.average();
}

