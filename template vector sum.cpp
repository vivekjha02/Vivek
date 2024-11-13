#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1={50,40,30,20,10};
	vector<int> v2={40,30,20,10,5};
	
	
	for(auto &num:v1)
	for(auto &gum:v2)
	{
		cout<<num+gum<<",";
	}
	
	
}
