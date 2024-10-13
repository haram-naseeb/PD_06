#include<iostream>
using namespace std;
float price(string day, string fruit, int quantity);
int main()
{
    float result;
    string day,fruit;
    int quantity;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., monday,sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    result=price(day,fruit,quantity);
    cout<<result;
}

float price(string day, string fruit, int quantity)
{
    float price;
    if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday")
    {
        if(fruit=="banana")
          price=quantity*2.50;
        else if(fruit=="apple")
          price=quantity*1.20;
        else if(fruit=="orange")
          price=quantity*0.85;
        else if(fruit=="grapefruit")
          price=quantity*1.45;
        else if(fruit=="kiwi")
          price=quantity*2.70;
        else if(fruit=="pineapple")
          price=quantity*5.50;
        else if(fruit=="grapes")
          price=quantity*3.85;
        else
          cout<<"error";
    }
    else if(day=="saurday" || day=="sunday")
    {
        if(fruit=="banana")
          price=quantity*2.70;
        else if(fruit=="apple")
          price=quantity*1.25;
        else if(fruit=="orange")
          price=quantity*0.90;
        else if(fruit=="grapefruit")
          price=quantity*1.60;
        else if(fruit=="kiwi")
          price=quantity*3.00;
        else if(fruit=="pineapple")
          price=quantity*5.60;
        else if(fruit=="grapes")
          price=quantity*4.20;
        else 
          cout<<"error";
    }
    else
    {
        cout<<"error";
    }
    return price;
}