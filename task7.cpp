#include<iostream>
#include<cmath>
using namespace std;
int minutestart, hourstart , hourarrival, minutearrival;
void time();
main()
{
    cout<<"Exam start time(Hours): ";
    cin>>hourstart;
    cout<<"Exam start time(Minutes): ";
    cin>>minutestart;
    cout<<"Student arrival of time(hour): ";
    cin>>hourarrival;
    cout<<"Student arrival of time(minute): ";
    cin>>minutearrival;
    time();
    
}

void time()
     { 
        int hour=0 , min;
        int result1 = (hourarrival * 60) + minutearrival;
        int result2 = (hourstart * 60) + minutestart;
        int difference = result1 - result2;
          if(difference > 0)
          {
             if(difference > 59)
             {
                  min = difference - 60;
                  hour = hour + 1;
                    cout<<"Late"<<endl;
                    cout<<hour<<":"<<min<<" hours after the start"<<endl;
                    
             }
             else
             {
                  cout<<"Late"<<endl;
                 cout<<difference<<" minutes after the start";
             }
             
          }

          else if(difference < 0 && difference <= -30)
          {
             if(difference < -59)
             {
                    
                    min = difference + 60;
                    hour = hour + 1;
                    cout<<"Early"<<endl;
                    cout<<hour<<":"<<abs(min)<<" hours before the start"<<endl;
                    
             }
             else
             {
                  cout<<"On time"<<endl;
                cout<<abs(difference)<<" minutes before the start";  
             }   
          }

          else
          {
               int res = (minutestart+60) - minutearrival; 
             cout<<"On time"<<endl;
             cout<<res<<" minutes before the start.";
          }
          
     }