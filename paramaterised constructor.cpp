//paramaterised constructor
#include<iostream>
using namespace std;
class volume
{
	 int length,breadth,height;
	 public:
	volume(int l, int b , int h)
	{
    length=l; 
	breadth=b;
	 height=h;
	}
	void a()
	{
	cout<<length*breadth*height;
	}
};
main()
{
	class volume obj(50,10,20);
	obj.a();
}
