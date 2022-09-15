#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char name[100];
 ifstream musk("vivekjha.txt" );   
 musk.get(name,70);    //reading
 
 cout<<name;
 
 musk.close();
 }
