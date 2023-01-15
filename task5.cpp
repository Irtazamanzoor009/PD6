#include<iostream>
using namespace std;
string fruit, day;
float quantity;
float payable;
float price();
main()
{
    cout<<"Enter name of fruit: ";
    cin>>fruit;
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter quantity: ";
    cin>>quantity;
    float result = price();
    cout<<"Total amount is: "<<result<<endl;
}
float price()
{
    
    if(day == "saturday" || day == "sunday")
    {
        if(fruit == "banana")
        {
            payable = quantity * 2.7;            
        }
        if(fruit == "apple")
        {
            payable = quantity * 1.25;           
        }
        if(fruit == "orange")
        {
            payable = quantity * 0.9;            
        }
        if(fruit == "grapefruit")
        {
            payable = quantity * 1.6;            
        }
        if(fruit == "kiwi")
        {
            payable = quantity * 3;            
        }
        if(fruit == "pineapple")
        {
            payable = quantity * 5.6;            
        }
        if(fruit == "grapes")
        {
            payable = quantity * 4.2;            
        }
        return payable;
    }
    
    if(day != "sunday" || day != "saturday")
    {
        if(fruit == "banana")
        {
            payable = quantity * 2.5;            
        }
        if(fruit == "apple")
        {
            payable = quantity * 1.2;           
        }
        if(fruit == "orange")
        {
            payable = quantity * 0.85;            
        }
        if(fruit == "grapefruit")
        {
            payable = quantity * 1.45;            
        }
        if(fruit == "kiwi")
        {
            payable = quantity * 2.7;            
        }
        if(fruit == "pineapple")
        {
            payable = quantity * 5.5;            
        }
        if(fruit == "grapes")
        {
            payable = quantity * 3.85;            
        }
        return payable;
    }
    
}