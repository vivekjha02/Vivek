#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class person
{
public:
string first_name, last_name;
int id, score[2],i;
float avg;
char grade;

};

class student : public person
{public:
int total=0,j;

student()
{
cout<<"Enter your first name"<<endl;
cin>>first_name;
cout<<"Enter your last name"<<endl;
cin>>last_name;
cout<<"Enter your ID"<<endl;
cin>>id;
cout<<"Enter your 3 subject scores"<<endl;
for(i=0;i<3;i++)
{
cin>>score[i];
}
}


void calculate()
{
for(j=0;j<3;j++)
{
total=total+score[j];
}
avg=(total/3);

if(avg<=100 && avg>=90)
{
grade='O';
}
if(avg<=90 && avg>80)
{
grade='A';
}
if(avg<=80 && avg>70)
{
grade='B';
}
if(avg<=70 && avg>55)
{
grade='C';
}
if(avg<=55 && avg>40)
{
grade='D';
}
if(avg<=40)
{
grade='E';
}
}

void display()
{
cout<<"\n Name : "<<first_name<<" "<<last_name<<endl;
cout<<" ID : "<<id<<endl;
cout<<" Grade : "<<grade<<endl;
}
};


int main()
{
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
student obj;
obj.calculate();
obj.display();
return 0;
}
