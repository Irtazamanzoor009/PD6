#include<iostream>
using namespace std;
string temperature, humidity;
string activity();
main()
{
    cout<<"Enter temperature: ";
    cin>>temperature;
    cout<<"Enter humidity: ";
    cin>>humidity;
    string result = activity();
    cout<<"Activity is: "<<result<<endl;
}
string activity()
{
    if(temperature == "warm" && humidity == "dry")
    {
        return "play tennis";
    }
    if(temperature == "warm" && humidity == "humid")
    {
        return "swim";
    }
    if(temperature == "cold" && humidity == "dry")
    {
        return "play basketball";
    }
    if(temperature == "warm" && humidity == "dry")
    {
        return "watch tv";
    }
    
}