//create a class car input data members car_name , price, car no., and print those value using member function

#include<iostream>
using namespace std;
class car

{
 public:
 
 int price;
 char car_name[20],car_no[10];
 
 void getdata()
 {
 	cout<<"enter the car name and car no=";
 	cin>>car_name>>car_no;
 	cout<<"enter price";
 	cin>>price;
	 }
	 void showdata()
 {
 	cout<<"\n  car name name is="<<car_name;
 	cout<<"\n car no is="<<car_no;
 	cout<<"\n car price is"<<price;
 }};
 main()
 {
 class car obj;
 obj.getdata();
 obj.showdata();
}
 
