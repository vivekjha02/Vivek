//RETHROW
#include<iostream>
using namespace std;
main()
{
 try{throw 20;}
 catch(int i)
 {cout<<"first throw statement:"<<i<<endl;
 throw 10;
 }
 catch(int i)
{cout<<"Second throw statement:"<<i<<endl;
}
}
