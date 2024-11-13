//Creating a file for writing inside it
#include<iostream>
#include<fstream>
using namespace std;
main()
{
 ofstream musk;                //constructor method
 musk.open("vivek.txt");       //open method
 
 musk<<"Leshrith: HELLO BROTHER"<<endl;
 musk<<"Leshrith: HOW ARE YOU?"<<endl;
 musk<<"Vivek: I'M GOOD , WHAT ABOUT YOU?";	
}

