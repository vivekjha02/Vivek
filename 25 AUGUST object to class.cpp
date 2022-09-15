//object to class
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
class student obj;
int r;  //r=rollno
char n[30];  //n=name
cout<<"Enter Roll no and Name";
cin>>r>>n;
obj.getdata(r,n);
obj.putdata();
}

