#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	
	vector<int> v1(10);
	cout<<"size is\t"<<v1.size()<<"\n";
	for(int i=0;i<v1.size();i++)
	{
		v1[i]=i;
	}
 for(int i=0;i<=19;i++)
 {
 	v1.push_back(i);
 }
 cout<<"size is\t"<<v1.size()<<"\n";
 
 for(int i=0;i<v1.size();i++)
 {
 	cout<<v1[i]<<"\t";
 }
 {
 
 cout<<"\nsum is = "<<accumulate(v1.begin(),v1.end(),0);
 return 0;
 }
}
