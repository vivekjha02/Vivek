
#include<iostream>
using namespace std;
class student
{
 public:
 int rollno;
 char name[30];
 virtual void getdata()
 {
 cin>>name>>rollno;
 }
 virtual void showdata()
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
student *p;
test obj;
p=&obj;
p->getdata();
p->showdata();
obj.getdata();
obj.showdata();
}
