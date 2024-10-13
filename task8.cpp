#include<iostream>
using namespace std;
int calculatevolleyballgames(int holidays, int hometownweekends, string type);
int main()
{
  string type;
  int holidays,hometownweekends,result;
  cout <<"Enter year type: ";
  cin >>type;
  cout<<"Enter number of holidays: ";
  cin>>holidays;
  cout<<"Enter number of weekends: ";
  cin>>hometownweekends;
  result=calculatevolleyballgames(holidays, hometownweekends, type);
  cout<<result;
}

int calculatevolleyballgames(int holidays, int hometownweekends, string type)
{
    float weekendsinsofia, not_working,volley,play_holidays;
    weekendsinsofia=48-hometownweekends;
    not_working=weekendsinsofia*3/4;
    play_holidays=holidays*2/3;
    if(type=="normal")
        volley=play_holidays+not_working+hometownweekends;
    if(type=="leap")
        volley=int((play_holidays+not_working+hometownweekends)+((play_holidays+not_working+hometownweekends)*0.15));
    return volley;
    
}
