//POINTER TO MEMBER FUNCTION
#include<iostream>
#include<string.h>
using namespace std;
class student
{
int rollno;
char name[30];
public:
void getdata(int x, char y[])  //x=5, y="ram"
{
rollno=x;
strcpy(name,y);
}
void putdata()
{
cout<<"rollno is="<<rollno <<endl;
cout<<"name is="<<name<<endl;
}
};
int main()
{
class student obj, *p;
p=&obj;

void (student::*ptr)(int,char[])= &student::getdata;

(obj.*ptr)(5,"VAM");
obj.putdata();

(p->*ptr)(25,"ANI");
p->putdata();

}
