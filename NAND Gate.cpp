// C++ program implementing the NAND gate

#include <iostream>
using namespace std;
int main()
{

int a[4] = { 1, 0, 1, 0 };
int b[4] = { 0, 1, 1, 0 };
int i, ans;

for (i = 0; i < 4; i++) {
if (a[i] == 1 && b[i] == 1)
ans = 0;
else
ans = 1;
cout<<a[i]<<b[i]<<" "<<ans;
}
}
