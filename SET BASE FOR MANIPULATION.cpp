//SET BASE
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
 int n;
 cout<<"Enter the number to manipulate =";
 cin>>n;
 cout<<"hexadecimal is= "<<setbase(16)<<n<<endl;
 cout<<"Octal is= "<<setbase(8)<<n<<endl;
 cout<<" Decimal is= "<<setbase(10)<<n;
}
