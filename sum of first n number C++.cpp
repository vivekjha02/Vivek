//Sum of first n number
#include<iostream>
using namespace std;
int main()
{
int number,i, sum=0;
cout<<"Enter the number:";
cin>> number;
for(i=1;i<=number;i++)
{                          //i=1    i=2    i=3    i=4    i=5
	sum=sum+i;           //sum=1  sum=3   sum=6 sum=10  sum=15
}
cout<<"sum is="<<sum;

}
