#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char name[80];
	int rollno;
 ofstream musk("vivekjha.txt" );                //constructor method
 //musk.open("vivekjha.txt");       //open method
 
 cout<<"ENTER THE NAME and roll no";
 cin>>rollno;
 gets(name);
 
 musk<<endl;
  musk<<name<< " " <<rollno<<endl;
 
 musk.close();
}
