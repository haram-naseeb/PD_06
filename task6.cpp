#include<iostream>
#include<string.h>
using namespace std;
string calculatePrices(string month,int stays);
main()
{
    string month,result;
    int stays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    result=calculatePrices(month, stays);
    cout<<result;
    
}

string calculatePrices(string month,int stays)
{
    float ap_price, st_price;
    string price;
    if(month=="may" || month=="october")
    {
        if(stays>14)
        {
        st_price=(50*stays)-(50*stays*0.3);
        ap_price=(65*stays)-(65*stays*0.1);
        }
        else if(stays>7)
        {
        st_price=(50*stays)-(50*stays*0.05);
        ap_price=65*stays;
        }
        else
        {
        st_price=50*stays;
        ap_price=65*stays;
        }
    }
     if(month=="june" || month=="september")
    {
        if(stays>14)
        {
        st_price=(75.2*stays)-(75.2*stays*0.2);
        ap_price=(68.7*stays)-(68.7*stays*0.1);
        }
        else
        {
        st_price=75.2*stays;
        ap_price=68.7*stays;
        }
    }
     if(month=="july" || month=="august")
    {
        if(stays>14)
        {
        st_price=76*stays;
        ap_price=(77*stays)-(77*stays*0.1);
        }
        else
        {
        st_price=76*stays;
        ap_price=77*stays;
        }
    }
    price="apartment: "+to_string(ap_price)+" $\nstudio: "+to_string(st_price)+" $";
    return price;
}