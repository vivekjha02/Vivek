#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> numbers ={1,100,20,40,80,60};
	cout<<"Number are ";
	for(auto &num:numbers) //range for loop
	{
		cout<<num<<",";
	}
	return 0;
}
