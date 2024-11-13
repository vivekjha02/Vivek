//
#include<iostream>
using namespace std;
class A
{
 public:
  void show()
 {
  cout<<"Base show"<<endl;
 }
  void print()
 {
  cout<<"Base print";
 }
};
class B:public A
{
 public:
 void show()
 {
  cout<<"Derived show"<<endl;
 }
 void print()
 {
  cout<<"Derived print";
 }
};
main()
{
 A *p= new B;
 p->show(); //derived class
 p->print(); //base class
}
