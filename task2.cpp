#include<iostream>
using namespace std;
string name;
float eng, math, chem, social, biology;
void grading();
main()
{
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter marks of English: ";
    cin>>eng;
    cout<<"Enter marks of Maths: ";
    cin>>math;
    cout<<"Enter marks of Chemistry: ";
    cin>>chem;
    cout<<"Enter marks of Social Science: ";
    cin>>social;
    cout<<"Enter marks of Biology: ";
    cin>>biology;
    grading();
}
void grading()
{
    float total = (eng + math + chem + social + biology) ;
    float percentage = (total * 100) / 500;
    cout<<"Name: "<<name<<endl;
    cout<<"Total marks is: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    if(percentage >= 90 && percentage <= 100)
    {
        cout<<"Grade A+"<<endl;
    }
    else if(percentage >= 80 && percentage <=89 )
    {
        cout<<"Grade A"<<endl;
    }
    else if(percentage >= 70 && percentage <= 79)
    {
        cout<<"Grade B+"<<endl;
    }
    else if(percentage >= 60 && percentage <=69 )
    {
        cout<<"Grade B"<<endl;
    }
    else if(percentage >= 50 && percentage <=59)
    {
        cout<<"Grade C"<<endl;
    }
    else if (percentage >= 40 && percentage <= 49)
    {
        cout<<"Grade D"<<endl;
    }
    else
    {
        cout<<"Grade F"<<endl;
    }
    

}