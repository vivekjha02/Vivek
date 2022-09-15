// C++ program implementing the OR gate
// using + operator

#include<iostream>
using namespace std;

int main()
{
int a[4] = { 1, 0, 1, 0 };
int b[4] = { 0, 1, 1, 0 };
int i, or_ans;

for (i = 0; i < 4; i++) 
{

// using the + operator
if (a[i] + b[i] > 0)
or_ans = 1;
else
or_ans = 0;

cout<<""<<endl;
cout<<a[i]<<b[i]<<" "<<or_ans;
}
}
