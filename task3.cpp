#include<iostream>
using namespace std;
string zodiac(int day,string month);
main()
{
    int day;
    string month,result;
    cout<<"Enter the Day of birth = ";
    cin>>day;
    cout<<"Month = ";
    cin>>month;
    result=zodiac(day,month);
    cout<<result;
}
string zodiac(int day,string month)
{
    string zodiac;
    if(month=="January")
    {
        if(day>=1 && day <20)
        zodiac="Capricon";
        if(day>=20 && day<=31)
        zodiac="Aquarius";
    }
    if (month=="February")
    {
         if(day>=1 && day <19)
        zodiac="Aquarius";
        if(day>=19 && day<=29)
        zodiac="Pisces";
    }
    if(month=="March")
    {
         if(day>=1 && day <=20)
        zodiac="Pisces";
        if(day>=21 && day<=31)
        zodiac="Aries";
    }
    if(month=="April")
    {
         if(day>=1 && day <20)
        zodiac="Aries";
        if(day>=20 && day<=30)
        zodiac="Taurus";
    }
    if(month=="May")
    {
         if(day>=1 && day <21)
        zodiac="Taurus";
        if(day>=21 && day<=31)
        zodiac="Gemini";
    }
    if(month=="June")
    {
        if(day>=1 && day <21)
        zodiac="Gemini";
        if(day>=21 && day<=30)
        zodiac="Cancer"; 
    }
    if(month=="July")
    {
        if(day>=1 && day <23)
        zodiac="Cancer";
        if(day>=23 && day<=31)
        zodiac="Leo"; 
    }
    if(month=="August")
    {
        if(day>=1 && day <23)
        zodiac="Leo";
        if(day>=23 && day<=31)
        zodiac="Virgo"; 
    }
    if(month=="September")
    {
        if(day>=1 && day <23)
        zodiac="Virgo";
        if(day>=23 && day<=30)
        zodiac="Libra"; 
    }
    if(month=="October")
    {
        if(day>=1 && day <23)
        zodiac="Libra";
        if(day>=23 && day<=31)
        zodiac="Scorpio"; 
    }
    if(month=="November")
    {
        if(day>=1 && day <22)
        zodiac="Scorpio";
        if(day>=22 && day<=30)
        zodiac="Sagittarius"; 
    }
    if(month=="December")
    {
        if(day>=1 && day <22)
        zodiac="Sagittarius";
        if(day>=22 && day<=31)
        zodiac="Capricon"; 
    }
    return zodiac;
    }
