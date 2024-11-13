#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	vector<int> v1={50,40,30,20,10};
	cout<<"Sum of all the elements of vector: "<<endl;
	cout<<accumulate(v1.begin(),v1.end(),0);
}
