//static function
#include<iostream>
using namespace std;
class student
{
	public:
	static int rollno;
	char name[20];
	static int count;
	void get()
	
{
	count++;
	cout<<"enter roll no and name=";
	cin>>rollno>>name;
		}
	static void show()
	{
		cout<<"\n calling is="<<count;
	}
};
int student::count=0;
int main() 
{

class student obj1;
obj1.get();
obj1.get();
obj1.get();
obj1.student::show();
}
