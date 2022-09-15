//Create a class with name: student, take the value of roll no , name, sci ,maths, english marks
//from the user and print those values using member function
#include<iostream>
using namespace std;
class student
{ public:
	int rollno, s,m,e, sum; //s=science_marks, m=maths_marks, e=english_marks
	char name[30];
	float avg;
	
 void getdata()
 {
 	cout<<"enter the values of rollno and name=";
 	cin>>rollno>>name;
 	cout<<"enter marks for s,m,e=";
 	cin>>s>>m>>e;
	 }	
 void showdata()
 {
 	cout<<"\n rollno is="<<rollno;
 	cout<<"\n name is="<<name;
 	int sum=s+m+e;
 	cout<<"\n sum is="<<sum;
 	int avg=sum/3;
 	cout<<"average marks="<<avg;
 }};
 main()
 {
 class student obj;
 obj.getdata();
 obj.showdata();
}
