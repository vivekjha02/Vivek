//declare a one class with name student , declare one member function with name getdata, taking rollno and name
//one mem func showdata where you print both rollno and name, Declare second class test ,declare

#include<iostream>
using namespace std;
class student
{
 public:
 int rollno;
 char name[30];
 void getdata()
 {
 cin>>name>>rollno;
 }
 void showdata()
 {
 cout<<"roll no is ="<<rollno<<endl;
 cout<<"name is ="<<name<<endl;
 }
};
class test:public student
{
 public:
 	float avg;
 int sub1,sub2,sub3;
 void getdata ()
 {
  cout<<"enter the subject marks= ";
  cin>>sub1>>sub2>>sub3;
 }
 void showdata()
 {
 	avg=(sub1+sub2+sub3)/3;
 	cout<<"Average of marks is ="<<(sub1+sub2+sub3)/3;
 }
};
main()
{
test obj;
obj.student::getdata();
obj.student::showdata();
obj.getdata();
obj.showdata();
}

