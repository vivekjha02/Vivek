//destructor  volume of rectangle
#include<iostream>
using namespace std;
class vor
{
	 int length,breadth,height;
	 public:
	vor()
	{
	length=8;
	breadth=5;
	height=7;
	}
	void v()
	{
	cout<<length*breadth*height<<endl;
	}
~vor()
{
	cout<<"destructor called";
}
};
main()
{
	class vor obj;
	obj.v();
}

