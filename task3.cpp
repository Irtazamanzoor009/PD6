#include<iostream>
using namespace std;
int date;
string month;
string Zsign();
main()
{
    cout<<"Enter date: ";
    cin>>date;
    cout<<"Enter Month: ";
    cin>>month;
    string result = Zsign();
    cout<<result<<endl<<" People born on this data have zodiac "<<result<<endl;
}
string Zsign()
{
    if((date >= 21 && month == "march") || (date <= 19 && month == "april"))
    {
        return "Aries";
    }
    if((date >= 20 && month == "april") || (date <= 20 && month == "may"))
    {
        return "Taurus";
    }
    if((date >= 21 && month == "may") || (date <= 20 && month == "june"))
    {
        return "Gemini";
    }
    if((date >= 21 && month == "june") || (date <= 22 && month == "july"))
    {
        return "Cancer";
    }
    if((date >= 23 && month == "july") || (date <= 22 && month == "august"))
    {
        return "Leo";
    }
    if((date >= 23 && month == "august") || (date <= 22 && month == "september"))
    {
        return "Virgo";
    }
    if((date >= 23 && month == "september") || (date <= 22 && month == "october"))
    {
        return "Libra";
    }
    if((date >= 23 && month == "october") || (date <= 21 && month == "november"))
    {
        return "Scorpio";
    }
    if((date >= 22 && month == "november") || (date <= 21 && month == "december"))
    {
        return "Sagittarius";
    }
    if((date >= 22 && month == "december") || (date <= 19 && month == "january"))
    {
        return "Capricon";
    }
    if((date >= 20 && month == "january") || (date <= 18 && month == "february"))
    {
        return "Aquarius";
    }
    if((date >= 19 && month == "february") || (date <= 20 && month == "march"))
    {
        return "Pisces";
    }
}
