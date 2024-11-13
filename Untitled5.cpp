#include<iostream>
#include<string.h>
using namespace std;
main()
{

string S1="rat hat mat  cat vat";

//find
int c=S1.find("cat");
cout<<c<<endl;

//insert
S1.insert(12, "cat cat");
cout<<S1;
}

