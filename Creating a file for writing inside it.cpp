//Creating a file for writing inside it
#include<iostream>
#include<fstream>
using namespace std;
main()
{
 ofstream musk;
 musk.open("vivek.txt");
 
 musk<<"HELLO BROTHER"<<endl;
 musk<<"HOW ARE YOU?";	
}

