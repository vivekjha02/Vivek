//recurrsion
//when fn calls itself again and again in known as recurrsion
//factorial of a number
#include<iostream>
using namespace std;

int fac(int n)
{
if (n==1)
return 1;
else
return n*fac(n-1);
}

int main() 
{
  int n,f;
  cout<<"Enter the number: ";
  cin>>n;
  f=fac(n);
  cout << "Factorial of the number: "<< f;
  
}
