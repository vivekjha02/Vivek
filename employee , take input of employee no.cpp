//create a class with name; employee , take input of employee no, name and employ salary
//using outside class definition of class and print those values

#include<iostream>
using namespace std;
class employee
{ public:
	int emp_no, salary;
	char name[30];
	void getdata();
	void putdata();
	};
 void employee::getdata()
 {
 	cout<<"enter employee name, no and salary =";
 	cin>>name>>emp_no>>salary;
	 }	
 void employee::putdata()
 {
 	cout<<"\n employee name is="<<name;
 	cout<<"\n employee number is="<<emp_no;
 	cout<<"\n employee salary="<<salary;
 	
 };
 main()
 {
 class employee obj;
 obj.getdata();
 obj.putdata();
}
