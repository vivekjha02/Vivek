#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5 };
	//Declaring vector iteretor
	vector<int>::iterator ptr;
	
	//Display vector elements
	cout<< "The vector elements are :"<<endl;
	for (ptr = v1.begin(); ptr<v1.end(); ptr++)
	{
		cout<< *ptr <<"\t";	
		}
		
	return 0;
}
