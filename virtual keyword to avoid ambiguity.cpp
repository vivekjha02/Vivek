//TO avoid ambiguity or ambiguous error 
#include<iostream>
using namespace std;
class A
{
 public:
 void show()
 {
 	cout<<"Hello form A"<<endl;
 }
};
class B:virtual public A{
};
class C:virtual public A{
};
class D:public B,public C{
};
int main()
{
 D obj;
 obj.show();
}
