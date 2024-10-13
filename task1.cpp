#include<iostream>
using namespace std;
string decideActivity (string temperature, string humidity);
main()
{
    string temperature,humidity,result;
    cout<<"Enter temperature (warm or cold):";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    result=decideActivity(temperature,humidity);
    cout<<result;
}

string decideActivity (string temperature, string humidity)
{
    string activity;
    if(temperature=="warm")
        if(humidity=="dry")
        activity="Play tennis";
        if(humidity=="humid")
        activity="swim";
    if(temperature=="cold")
        if(humidity=="dry")
        activity="Play Basketball";
        if(humidity=="humid")
        activity="Watch tv";
    return activity;
}