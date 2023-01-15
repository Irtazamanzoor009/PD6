#include <iostream>
using namespace std;
int getCoordinates(int X, int Y, int length);

main()
{
    int length;
    int X;
    int Y;
    int answer;

    cout<< "Enter the length: ";
    cin >> length;
    cout << "Enter coordinate of x: ";
    cin >> X;
    cout << "Enter coordinate of y: ";
    cin >> Y;

    answer = getCoordinates(X, Y, length);
    if(answer == 1)
    {
        cout << "Inside";
    }
    if(answer== 2)
    {
        cout << "Outside";
    }
    if(answer== 3)
    {
        cout << "On Border";
    }
    
}

int getCoordinates(int X, int Y, int length)
{
    int direction;

    if(((X > 0) && (X < 3*length)) && (Y > 0) && (Y < length))
    {
        direction = 1;
    }
    else if(((X > length) && (X < 2*length)) && (Y > 0) && (Y < 4*length))
    {
        direction = 1;
    }
    else if(((X >= length) && (X <= 2*length)) && (Y >= 0) && (Y <= 4*length))
    {
        direction = 3;
    }
    else if(((X >= 0) && (X <= 3*length)) && (Y >= 0) && (Y <= length))
    {
        direction = 3;
    }
    else 
    {
        direction = 2;
    }
    return direction;
}