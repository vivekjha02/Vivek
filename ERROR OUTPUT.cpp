//ambiguity or ambiguous error 
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
class B:public A{
};
class C:public A{
};
class D:public B,public C{
};
int main()
{
 D obj;
 obj.show();
}
