#include<iostream>
using namespace std;
class Rectangle
{
public:
float length,width;
void set(float l,float w)
{
length=l;
width=w;
}
void show()
{
cout<<"Length = "<<length<<endl;
cout<<"Width = "<<width<<endl;
}};
class Block : public Rectangle
{
float height;
public:
void setHeight(float h)
{
height=h;
}
void showHeight()
{
cout<<"Height = "<<height<<"\n";
}};
int main()
{
Block obj;
obj.set(50.6,90.2);
obj.show();
obj.setHeight(72.5);
obj.showHeight();
}
