#include<iostream>
using namespace std;
class CGPA
{
    public:
    int total_grade_point=0,att,ca,mt,et,oet,total,grade,grade_point[11];
    float cal_tgpa ;
    int find_grade(int a)
    {
        if(a>=91 && a<=100)
        {
        return 10;
        }
        else if(a>=81 && a<=90)
        {
        return 9;
        }
        else if(a>=71 && a<=80)
        {
        return 8;
        }
        else if(a>=61 && a<=70)
        {
        return 7;
        }
        else if(a>=51 && a<=60)
        {
        return 6;
        }
        else if(a>=41 && a<=50)
        {
        return 5;
        }
        else
        {
        return 0;
        }
     return 0;
    }
    void cal_cap100m()
    {
      cout<<"\n                   Enter Your CAP100M PROGRAMME ORIENTATION  Marks Details          ";
      cout<<"\n\n              Enter your Attendance Marks Out of 30        =  ";
      cin>>att;
      cout<<"     Enter your CA(continuous Assessment) Marks Out of 70  =  ";
      cin>>ca;
      total = att + ca;
      grade = find_grade(total);
      grade_point[0] = 2 * grade;
      //cout<<grade_point[0];
    }
    void cal_cap275()
    {
    cout<<"\n                   Enter Your CAP275 DATA COMMUNICATION AND NETWORKING THEORY Marks Details          ";
     cout<<"\n\n               Enter your Attendance Marks Out of  5        =  ";
      cin>>att;
      cout<<"      Enter your CA(continuous Assessment) Marks Out of 25  =  ";
      cin>>ca;
      cout<<"             Enter your Theory End Term Marks Out of 50     =  ";
      cin>>et;
      cout<<"               Enter your Theory Mid Term Marks Out of 20   =  ";
      cin>>mt;
      total = att + ca + et + mt;
      grade =find_grade(total);
      grade_point[1] = 3 * grade;
      //cout<<grade_point[1];

    }
    void cal_cap276()
    {
    cout<<"\n                 Enter Your CAP276 DATA COMMUNICATION AND NETWORKING - LABORATORY Marks Details          ";
      cout<<"\n\n             Enter your Attendance Marks Out of 5          =  ";
      cin>>att;
      cout<<"       Enter your CA(continuous Assessment) Marks Out of 45  =  ";
      cin>>ca;
      cout<<"                 Enter your Theory End Term Marks Out of 50  =  ";
      cin>>et;
      total = att + ca + et;
      grade = find_grade(total);
      grade_point[2] = grade;
      cout<<grade_point[2];

    }
     void cal_cap437()
    {
    cout<<"\n                 Enter Your CAP437 SOFTWARE ENGINEERING PRACTICES Marks Details          ";
      cout<<"\n\n                Enter your Attendance Marks Out of 5       =  ";
      cin>>att;
      cout<<"       Enter your CA(continuous Assessment) Marks Out of 25  =  ";
      cin>>ca;
      cout<<"           Enter your Theory Eid Term Marks Out of 50  =  ";
      cin>>et;
      cout<<"            Enter your Theory Mid Term Marks Out of 20  =  ";
      cin>>mt;
      total = att + ca + et + mt;
      grade = find_grade(total);
      grade_point[3] = 4 * grade;
      cout<<grade_point[3];

    }
     void cal_cap444()
    {
    cout<<"\n                   Enter Your CAP444 OBJECT ORIENTED PROGRAMMING USING C++ THEORY Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 5  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 25  =  ";
      cin>>ca;
      cout<<"\n        Enter your OBJECTIVE TYPE End Term Marks Out of 15  =  ";
      cin>>oet;
      cout<<"\n        Enter your  Mid Term Marks Out of 20  =  ";
      cin>>mt;
      cout<<"\n        Enter your  End Term Marks Out of 35  =  ";
      cin>>et;
      total = att + ca + oet + mt + et;
      grade = find_grade(total);
      grade_point[4] = 3 * grade;
      cout<<grade_point[4];

    }
    void cal_cap445()
    {
    cout<<"\n                    Enter Your CAP445 OBJECT ORIENTED PROGRAMMING USING C++ - LABORATORY Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 5  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 45  =  ";
      cin>>ca;
      cout<<"\n        Enter your Theory Eid Term Marks Out of 50  =  ";
      cin>>et;
      total = att + ca + et;
      grade = find_grade(total);
      grade_point[5] = grade;
      cout<<grade_point[5];
  }
 void cal_cap446()
    {
    cout<<"\n                   Enter Your CAP446 DATA WAREHOUSEING AND DATA MINING THEORY Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 5  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 25  =  ";
      cin>>ca;
      cout<<"\n        Enter your OBJECTIVE TYPE End Term Marks Out of 15  =  ";
      cin>>oet;
      cout<<"\n        Enter your  Mid Term Marks Out of 20  =  ";
      cin>>mt;
      cout<<"\n        Enter your  End Term Marks Out of 35  =  ";
      cin>>et;
      total = att + ca + oet + mt + et;
      grade = find_grade(total); 
      grade_point[6] = 3 * grade;
      cout<<grade_point[6];

    }
    void cal_cap447()
    {
    cout<<"\n                    Enter Your CAP447 DATA WAREHOUSEING AND DATA MINING - LABORATORY Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 5  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 45  =  ";
      cin>>ca;
      cout<<"\n        Enter your Theory Eid Term Marks Out of 50  =  ";
      cin>>et;
      total = att + ca + et;
      grade = find_grade(total);
      grade_point[7] = grade;
      cout<<grade_point[7];
   }
 void cal_cap448()
    {
    cout<<"\n                   Enter Your CAP448 LINUX AND SHELL SCRIPTING THEORY Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 5  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 25  =  ";
      cin>>ca;
      cout<<"\n        Enter your OBJECTIVE TYPE End Term Marks Out of 15  =  ";
      cin>>oet;
      cout<<"\n        Enter your  Mid Term Marks Out of 20  =  ";
      cin>>mt;
      cout<<"\n        Enter your  End Term Marks Out of 35  =  ";
      cin>>et;
      total= att + ca + oet + mt + et;
      grade = find_grade(total);
      grade_point[8] = 3 * grade;
      cout<<grade_point[8];

    }
 void cal_cap454()
    {
    cout<<"\n                    Enter Your CAP454 LINUX AND SHELL SCRIPTING- LABORATORY Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 5  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 45  =  ";
      cin>>ca;
      cout<<"\n        Enter your Theory Eid Term Marks Out of 50  =  ";
      cin>>et;
      total= att + ca + et;
      grade = find_grade(total);
      grade_point[9] = grade;
      cout<<grade_point[9];
    }
void cal_pea515_I()
    {
    cout<<"\n                   Enter Your PEA515 I ANALYTICAL SKILLS-I Marks Details          ";
      cout<<"\n        Enter your Attendance Marks Out of 15  =  ";
      cin>>att;
      cout<<"\n        Enter your CA(continuous Assessment) Marks Out of 30  =  ";
      cin>>ca;
      cout<<"\n        Enter your Theory Eid Term Marks Out of 40  =  ";
      cin>>et;
      cout<<"\n        Enter your Theory Mid Term Marks Out of 15  =  ";
      cin>>mt;
      total = att + ca + et + mt;
       grade = find_grade(total);
      grade_point[10] = 4 * grade;
      cout<<grade_point[10];
    }
    void tgpa()
    {
        for(int i=0;i<11;i++)
        {
            total_grade_point = total_grade_point + grade_point[i];
        }
        cal_tgpa = total_grade_point / 26.00;
        cout<<" \n    your TGPA is   =  "<<cal_tgpa<< " cgpa";
    }
};
int main()
{

cout<<" \n                   WELCOME TO TGPA CACLULATOR SOFTWARE -LPU CGPA";
cout<<" \n\n                   DON'T FORGOT TO THANK RITIK. ";
cout<<"\n\n                  this software for findig tgpa only for MCA Semester 1 students";
cout<<"\n                  lets start\n";
CGPA calculate;
calculate.cal_cap100m();
calculate.cal_cap275();
calculate.cal_cap276();
calculate.cal_cap437();
calculate.cal_cap444();
calculate.cal_cap445();
calculate.cal_cap446();
calculate.cal_cap447();
calculate.cal_cap448();
calculate.cal_cap454();
calculate.cal_pea515_I();
calculate.tgpa();
return 0;
}
