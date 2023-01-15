#include<iostream>
using namespace std;
char code;
int minutes;
string time;
void bill();
main()
{
    cout<<"Enter service code: ";
    cin>> code; 
    if (code == 'r' || code == 'R' || code== 'P'|| code== 'p')
    {
        cout<<"Enter number of minutes: ";
       cin>> minutes;  
        bill();
    }
     else
    {
        
        cout<<"Error! Invalid Entity"<<endl;
        
    }
}
void bill()
{
    if (code == 'r' || code == 'R')
    {
        if(minutes <= 50)
        {
            cout<<"The charges are: 10$";
        }
        if(minutes > 50)
        {
            float calculateminutes = minutes - 50;
            float price = calculateminutes * 0.2;
            float totalbill = 10 + price;
            cout<<"The charges are: "<<totalbill<<endl;
        }
    }
    else if (code == 'P' || code == 'p')
    {
        cout<<"Enter day or night: ";
        cin>> time;
        if(time == "day" && minutes <= 75)
        {
            cout<<"The charges are: 25$";
        }
        if(time == "day" && minutes > 75)
        {
            float calculateminutes = minutes - 75;
            float price = calculateminutes * 0.1;
            float totalbill = 25 + price;
            cout<<"The charges are: "<<totalbill<<endl;
        }
        if(time == "night" && minutes <= 100)
        {
            cout<<"The charges are: 25$";
        }
        if(time == "night" && minutes > 100)
        {
            float calculateminutes = minutes - 100;
            float price = calculateminutes * 0.05;
            float totalbill = 25 + price;
            cout<<"The charges are: "<<totalbill<<endl;
        }
    }
   
}