#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

void maze();
void gotoxy(int x, int y);
void showpacman(int x, int y);
void clearpacman(int x, int y);
char GetCharAtxy(short int x, short int y);
void score(int sc);
void showghost(int x, int y);
void showghostvertically(int x, int y);
int x,y;
char nextlocation;
int sc=0;
int vx = 55;
	int vy = 10;
main()
{
	system("cls");		

int px = 8;
int py = 3;
	maze();

	
	showpacman(px,py);
	int x = 30;
	int y = 10;
	int x1 = 58;
	int y1 = 13;
while(true)
{
	showghost(x,y);
	{
	if(x < 45)
	{
		x = x + 1;
	}
	if(x == 45)
	{
		gotoxy(x-1,y);
		cout<<" ";
		x=30;
		
	}
	}
	
	
	showghostvertically(x1,y1);
	{
	if(y1 < 20)
	{
		y1 = y1+1;
	}
	if(y1 == 20)
	{ 
		gotoxy(x, y1-1);
		cout<<" ";
		y1=13;
			
	}
	}

	
	if(GetAsyncKeyState(VK_RIGHT))
	{
		nextlocation = GetCharAtxy(px+1 , py);
		
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			px = px+1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			px = 8;
			py = 3;
			sc = sc * 0;
			score(sc);
			showpacman(px,py);
			
			
		}
		if(nextlocation == '.')
		{ 
			clearpacman(px,py);
			px = px + 1;
			showpacman(px,py);
			sc = sc + 1;	
			score(sc);				
		}		
	}

	if(GetAsyncKeyState(VK_LEFT))
	{
		nextlocation = GetCharAtxy (px-1,py);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			px = px-1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			px = 8;
			py = 3;
			sc = sc * 0;
			score(sc);
			showpacman(px,py);
		}
		
		if(nextlocation == '.')
		{
			clearpacman(px,py);
			px = px-1;
			showpacman(px,py);
			sc = sc + 1;	
			score(sc);				
		}		
	}

	if(GetAsyncKeyState(VK_UP))
	{
		nextlocation = GetCharAtxy(px,py-1);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			py = py-1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			px = 8;
			py = 3;
			sc = sc * 0;
			score(sc);
			showpacman(px,py);
		}
		
		if(nextlocation == '.')
		{
			clearpacman(px,py);
			py = py-1;
			showpacman(px,py);
			sc = sc + 1;	
			score(sc);				
		}

	}
	if(GetAsyncKeyState(VK_DOWN))
	{
		nextlocation = GetCharAtxy(px,py+1);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			py = py+1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			px = 8;
			py = 3;
			sc = sc * 0;
			score(sc);
			showpacman(px,py);
		}
		
		if(nextlocation == '.')
		{
			clearpacman(px,py);
			py = py+1;
			showpacman(px,py);
			sc = sc + 1;	
			score(sc);				
		}
	}
}
gotoxy(0,20);
}

void maze()
{
cout<<" ###############################################################################   "<<endl;
cout<<" ||.. ..............................................................   .....  ||   "<<endl;
cout<<" ||.. %%%%%%%%%%%%%%%%%          ...          %%%%%%%%%%%%%%%  |%|..    %%%   ||   "<<endl;
cout<<" ||..       |%|     |%|       |%|...           |%|        |%|  |%|..    |%|   ||   "<<endl;
cout<<" ||..       |%|     |%|       |%|...           |%|        |%|  |%|..    |%|   ||   "<<endl;
cout<<" ||..       %%%%%%%%%%%   ..  |%|...           %%%%%%%%%%%%%%     ..    %%%.  ||   "<<endl;
cout<<" ||..       |%|           ..  |%|...           .............. |%| ..       .  ||   "<<endl;
cout<<" ||..       %%%%%%%%%%%   ..  |%|...           %%%%%%%%%%%%   |%| ..    %%%.  ||   "<<endl;
cout<<" ||..               |%|.  ..                   |%|......      |%| ..    |%|.  ||   "<<endl;
cout<<" ||..     ......... |%|.  ..                   |%|......|%|       ..    |%|.  ||   "<<endl;
cout<<" ||..|%|  |%|%%%|%|.|%|. |%|                      ......|%|       ..|%| |%|.  ||   "<<endl;
cout<<" ||..|%|  |%|   |%|..    %%%%%%%%%%%%%%%%%%       ......|%|        .|%|.      ||   "<<endl;
cout<<" ||..|%|  |%|   |%|..                ...|%|          %%%%%%       . |%|.      ||   "<<endl;
cout<<" ||..|%|            .                ...|%|                   |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|  %%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%%     |%| ..|%|%%%%   ||   "<<endl;
cout<<" ||.......................................................    |%| ..........  ||   "<<endl;
cout<<" ||    ...................................................          ........  ||   "<<endl;
cout<<" ||..|%|  |%|  |%|..     %%%%%%%%%%%%%%      ..........|%|    |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|  |%|  |%|..             ...|%|           %%%%%%%%    |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|           .             ...|%|                       |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|  %%%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%%%%%        |%| ..|%|%%%%   ||   "<<endl;
cout<<" ||.....................................................      |%| .........   ||   "<<endl;
cout<<" ||  ...................................................             ......   ||   "<<endl;
cout<<" ###############################################################################   "<<endl;

}

void gotoxy(int x, int y)
{
COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void showpacman(int x, int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(50);	

}

void clearpacman(int x , int y)
{
	gotoxy(x,y);
	cout<<" ";
}

void showghost(int x, int y)
{
    gotoxy(x-1, y);
    cout<<"     ";
    gotoxy(x,y);
    cout<<"G";
    Sleep(200);
}

void showghostvertically(int x, int y)
{
    gotoxy(x, y-1);
    cout<<" ";
    gotoxy(x,y);
    cout<<"G";
    Sleep(200);
}
void score(int sc)
{	
	gotoxy(85,1);
	cout<<"  Score:          ";
	gotoxy(85,1);
	cout<<"Score: "<<sc;
}

char GetCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}