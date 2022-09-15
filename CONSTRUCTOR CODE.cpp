#include<iostream>
using namespace std;
class BOOK
{
	int year, price;
	public:
	BOOK(int y, int p)
{
 year=y;
 price=p;	
}
void show()
{
	cout<<"Price of the book is = "<<price<<endl;
	cout<<"Year of publication is = "<<year<<endl;
}
};

main()
{
 int y, p;
 cout<<"Enter the price and year";
 cin>>p>>y;
 class BOOK obj(p,y);
 obj.show();
}

