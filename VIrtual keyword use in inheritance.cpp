#include<iostream>
using namespace std;
class student
{
 public:
 char name[30];
 int rollno;
 void get()
 {
 cout<<"Enter the name and rollno= ";
 cin>>name>>rollno;
 }
};
class test:virtual public student
{
 public:
 int sub1,sub2,sub3;
 void get1()
 {
 cout<<"Enter the three subjects = ";
 cin>>sub1>>sub2>>sub3;
 }
};
class player:virtual public student
{
 public:
 int id, score;
 char g_name[30];
 void get2()
 {
 cout<<"Enter the id, score and name of the game= ";
 cin>>id>>score>>g_name;
 }};
 class print: public test, public player
 {
  public:
  	void show()
{
	cout<<"rollno is= "<<rollno<<endl;
	cout<<" Name is= "<<name<<endl;
	cout<<" Average is= "<<(sub1+sub2+sub3)/3<<endl;
	cout<<"score is = "<<score<<endl;
}
 };
 main()
 {
  print obj;
  obj.get();
  obj.get1();
  obj.get2();
  obj.show();
 }
 

