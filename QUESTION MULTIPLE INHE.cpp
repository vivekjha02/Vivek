//declare a class with the name student have a entry for roll no name and the 3 subject
//there is a another class detail that is inherited the property from the base class and print the sum of the subject 
//and average of student . Take a one function in a DETAIL class 

#include<iostream>
using namespace std;
class student
{
  public:
  char n[30];
  int rn, m1, m2 ,m3;
  void getdata()
  {
  	cout<<"Enter the student name = ";
  	cin>>n;
  	cout<<"Enter the student roll no = ";
  	cin>>rn;
  	cout<<"Enter the student marks = ";
  	cin>>m1>>m2>>m3;
  }
};
class detail: public student
{
 
}
