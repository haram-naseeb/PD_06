#include<iostream>
using namespace std;
float calculateAverage(float english,float maths,float chemistry,float socialScience,float biology);
string calculateGrade(float average);
int main()
{
    string name,output;
    float english,maths,chemistry,socialScience,biology,average;
    cout<<"Enter stuent name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>english;
    cout<<"Enter marks for Maths: ";
    cin>>maths;
    cout<<"Enter marks for chemistry: ";
    cin>>chemistry;
    cout<<"Enter marks for Social Science: ";
    cin>>socialScience;
    cout<<"Enter marks for biology: ";
    cin>>biology;
    cout<<"Student name: "<<name<<endl;
    average=calculateAverage(english,maths,chemistry,socialScience,biology);
    cout<<"Percentage: "<<average<<" %"<<endl;
    output=calculateGrade(average);
    cout<<"Grade: "<<output;
}
float calculateAverage(float english,float maths,float chemistry,float socialScience,float biology)
{
    float ob_Marks,percentage;
    ob_Marks=english+maths+chemistry+socialScience+biology;
    percentage=(ob_Marks/500)*100;
    return percentage;
}

string calculateGrade(float average)
{
    string grade;
    if(average>=90 && average<100)
       grade="A+";
    else if(average>=80 && average<90)
       grade="A";
    else if(average>=70 && average<80)
       grade="B+";
    else if(average>=60 && average<70)
       grade="B";
    else if(average>=50 && average<60)
       grade="C";
    else if(average>=40 && average<50)
       grade="D";
    else
       grade="F";
    return grade;
}