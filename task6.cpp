#include<iostream>
using namespace std;
string month;
int stays;
void rent();
main()
{
    cout<<"Enter month(May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Number of stays: ";
    cin>>stays;
    rent();
}
void rent()
{
    if(month == "may" || month == "october") 
    {
        if(stays >= 7 && stays < 14 )
        {
            float price = stays * 50;
            float price1 = stays * 65;
            float discount = price - (price * 0.05);
            cout<<"Apartment: "<<price1<<"$"<<endl;
            cout<<"Studio: "<<discount<<"$"<<endl;
        }
        if(stays < 7)
        {
            float price = stays * 50;
            float price1 = stays * 65;
           cout<<"Apartment: "<<price1<<"$"<<endl;
           cout<<"Studio: "<<price<<"$"<<endl;
        }
        if(stays >= 14)
        {
            float price = stays * 50;
            float price1 = stays * 65;
            float discount = price - (price * 0.3);
            float discount1 = price1 - (price1 * 0.1);
           cout<<"Apartment: "<<discount1<<"$"<<endl;
           cout<<"Studio: "<<discount<<"$"<<endl;
        }       
    }
    if(month == "june" || month == "september") 
    {
        if(stays >= 7 && stays <= 14 )
        {
            float price = stays * 75.2;
            float price1 = stays * 68.7;
            cout<<"Apartment: "<<price1<<"$"<<endl;
            cout<<"Studio: "<<price<<"$"<<endl;
        }
        if(stays < 7)
        {
            float price = stays * 75.2;
            float price1 = stays * 68.7;
           cout<<"Apartment: "<<price1<<"$"<<endl;
           cout<<"Studio: "<<price<<"$"<<endl;
        }
        if(stays > 14)
        {
            float price = stays * 75.2;
            float price1 = stays * 68.7;
            float discount = price - (price * 0.2);
            float discount1 = price1 - (price1 * 0.1);
           cout<<"Apartment: "<<discount1<<"$"<<endl;
           cout<<"Studio: "<<discount<<"$"<<endl;
        }       
    }
    if(month == "july" || month == "august") 
    {
        if(stays >= 7 && stays < 14 )
        {
            float price = stays * 76;
            float price1 = stays * 77;
            cout<<"Apartment: "<<price1<<"$"<<endl;
            cout<<"Studio: "<<price<<"$"<<endl;
        }
        if(stays < 7)
        {
            float price = stays * 76;
            float price1 = stays * 77;
           cout<<"Apartment: "<<price1<<"$"<<endl;
           cout<<"Studio: "<<price<<"$"<<endl;
        }
        if(stays >= 14)
        {
            float price = stays * 76;
            float price1 = stays * 77;
            float discount1 = price1 - (price1 * 0.1);
           cout<<"Apartment: "<<discount1<<"$"<<endl;
           cout<<"Studio: "<<price<<"$"<<endl;
        }       
    }
}