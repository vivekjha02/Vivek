// C++ program implementing the AND gate
// through product method.

#include <iostream>
using namespace std;
int main()
{
int a[4] = { 1, 0, 1, 0 };
int b[4] = { 0, 1, 1, 0 };
int i, product;

for (i = 0; i < 4; i++) {

// using product method
product = a[i] * b[i];


cout<<a[i]<<b[i]<<" "<<product<<endl;
}
}
