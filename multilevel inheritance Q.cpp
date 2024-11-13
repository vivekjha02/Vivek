#include<iostream>
using namespace std;
class employee
{
 public:
 char name[30];
 int id;
 void get()
 {
  cout<<"Enter the name = ";
  cin>>name;
  cout<<"Enter the id = ";
  cin>>id;
 }
};
class show:public employee
{
	public:
	void show1()
	{
	
	cout<<"id is = "<<id<<endl;
	cout<<"name is = "<<name<<endl;
}
	float da, hra, basics;
	void get1()
{
	cout<<"Enter the value da, hra and basics = ";
	cin>>da>>hra>>basics;
}
};
class print: public show
{
 public:
 int t_salary;
 void show2()
 {
 	cout<<"id is = "<<id<<endl;
 	t_salary=da+hra+basics;
 	cout<<"The total salary is = "<<da+hra+basics;
 }
};
main()
{
 print obj;
 obj.get();
 obj.show1();
 obj.get1();
 obj.show2();
 
}
