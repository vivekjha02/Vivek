//find area of circle using friend function
#include<iostream>
using namespace std;
class area
{
	int r;
	float pi;
	public:
	void getdata()
	{
		cout<<"enter the value of radius";
		cin>>r;
	}
	friend void aoc(area ob);  //prototype
};
void aoc(area ob)
{
	ob.pi=3.14;
	float ans;
	ans=ob.pi*ob.r*ob.r;
	cout<<"Area of circle is="<<ans;
}
main()
{
	class area obj;
	obj.getdata();
	aoc(obj);
	
}
