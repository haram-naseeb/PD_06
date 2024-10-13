#include<iostream>
using namespace std;
float due(char code, int minutes);
int main()
{
    char code;
    int minutes;
    float result;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    result=due(code, minutes);
    cout<<"Amount due: $"<<result;
}

float due(char code, int minutes)
{   char call;
    float due;
    if(code=='p' || code=='P')
    {
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>call;
        cout<<"Service type: Premium"<<endl;
        cout<<"Total minutes used: "<<minutes<<" minutes"<<endl;
        if(call=='N' || call=='n')
        due=((minutes-100)*0.05)+25;
        if(call=='D' || call=='d')
        due=(minutes-75)*0.10+25;
    }
    else
    {
       cout<<"Service Type: Regular"<<endl;
       cout<<"Total minutes used: "<<minutes<<" minutes"<<endl;
       due=(minutes-50)*0.20+10;
    }
    return due;

}
