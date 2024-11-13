#include<iostream>
#include<fstream>
using namespace std;

class Painting
{
public:
string painting_title,artist_name;
float value;
Painting(){}
Painting(string title,string name)
{
painting_title=title;
artist_name=name;
value=400;
}

void display()
{
cout<<painting_title<<" "<<artist_name<<" "<<value<<endl;

}

};

class FamousPainting : public Painting
{

public:
FamousPainting(string title,string name):Painting(title,name)
{
value=25000;
}

};

int main()
{
fstream file("Paintings.txt",ios::out);
Painting arr[10];

for(int i=0;i<10;i++)
{
string title,name;
cout<<"Painting "<<i+1<<" :"<<endl;
cout<<"Painting title : ";
getline(cin,title);
cout<<"Artist name : ";
getline(cin,name);
cout<<endl;

if(name=="Degas" || name=="Monet" || name=="Picasso" || name=="Rembrandt" || name=="degas" || name=="monet" || name=="picasso" || name=="rembrandt" )
{
arr[i]=FamousPainting(title,name);

}

else
{
arr[i]=Painting(title,name);
}
}

for(int i=0;i<10;i++)
{
file<<arr[i].painting_title<<" ";
file<<arr[i].artist_name<<" ";
file<<arr[i].value<<endl;

}
file.close();
return 0;
}
