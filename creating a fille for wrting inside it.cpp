#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char s[80];
 ofstream musk("vivekjha.txt" , ios::app);                //constructor method
 //musk.open("vivekjha.txt");       //open method
 
 cout<<"ENTER THE NAME";
 gets(s);  //cin>>s;
 musk<<s;
 cout<<endl;
 
 musk.close();
}
