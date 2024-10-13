#include<iostream>
using namespace std;
string status(int examhour, int examminute, int arrivehour, int arriveminute);
int main()
{
    string result;
    int examhour,examminute,arrivehour,arriveminute;
    cout<<"Enter exam starting time (hour): ";
    cin>>examhour;
    cout<<"Enter exam starting time (minutes): ";
    cin>>examminute;
    cout<<"Enter student hour of arrival: ";
    cin>>arrivehour;
    cout<<"Enter student minutes of arrival: ";
    cin>>arriveminute;
    result=status(examhour,examminute,arrivehour,arriveminute);
    cout<<result;

 
}

string status(int examhour, int examminute, int arrivehour, int arriveminute)
{
    string status;
    int hours,minutes;
    if(examhour>arrivehour)
    {
        if(examminute>arriveminute)
        {
            hours=examhour-arrivehour;
            minutes=examminute-arriveminute;
            status="Early\n"+to_string(hours)+":"+to_string(minutes)+" hours before the start";
        }
        else
        {
            hours=examhour-arrivehour;
            hours=hours-1;
            minutes=arriveminute-examminute;
            minutes=60-minutes;
            if(hours==0)
            {
                if(minutes>30)
                status="Early\n"+to_string(minutes)+" minutes before the start";
                else
                status="on time";
            }
        }
    }
    if(arrivehour>examhour)
    {
        if(arriveminute>examminute)
        {
            hours=examhour-arrivehour;
            minutes=arriveminute-examminute;
            status="Late\n"+to_string(hours)+":"+to_string(minutes)+" hours after the start";
        }
        else
        {
            hours=examhour-arrivehour;
            hours=hours-1;
            minutes=arriveminute-examminute;
            minutes=60-minutes;
            if(hours==0)
            {
                if(minutes>30)
                status="Late\n"+to_string(minutes)+" minutes after the start";
                else
                status="on time";
            }
        }
        
    }
    if(examhour==arrivehour)
    {
        if(examminute>arriveminute)
        {
            minutes=examminute-arriveminute;
            status=to_string(minutes)+" minutes before the start";
        }
        else
        {
            minutes=arriveminute-examminute;
            if(minutes<30)
            status="on time";
            else
            status=to_string(minutes)+"late after the start";
        }
    } 
    return status;
}