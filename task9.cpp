#include<iostream>
using namespace std;
string check_point_position(int h, int x, int y);
int main()
{
   int h,x,y;
   string result;
   cout<<"Enter the height: ";
   cin>>h;
   cout<<"Enter the x coordinate: ";
   cin>>x;
   cout<<"Eter the y coordiate: ";
   cin>>y;
   result=check_point_position(h,x,y);
   cout<<result;
}

string check_point_position(int h,int x,int y)
{
string position;
    if((y>0 && y<h && x>0 && (x<3*h)) || (y<=4*h && x>h && x<2*h) )
        position="inside";
    else if ((y==0 && x<=3*h) || (y==h && x<=3*h) || (x==0 && y<=h) || (x==h && y<=4*h) || (x==2*h && y<=4*h) || (x==3*h && y<=h))
        position="border";
    else
       position="outside";
    return position;
}
