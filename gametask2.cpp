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
int x,y;
char nextlocation;
int sc=0;

main()
{
	system("cls");		

int px = 8;
int py = 3;
int gx = 10;
int gy = 2;
	maze();
	showpacman(px,py);
	
while(true)
{
	
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
cout<<" ||..       %%%%%%%%%%%   ..  |%|...     G     %%%%%%%%%%%%%%     ..    %%%.  ||   "<<endl;
cout<<" ||..       |%|           ..  |%|...           .............. |%| ..       .  ||   "<<endl;
cout<<" ||..       %%%%%%%%%%%   ..  |%|...           %%%%%%%%%%%%   |%| ..    %%%.  ||   "<<endl;
cout<<" ||..  G            |%|.  ..                   |%|......      |%| ..    |%|.  ||   "<<endl;
cout<<" ||..     ......... |%|.  ..                   |%|......|%|       ..    |%|.  ||   "<<endl;
cout<<" ||..|%|  |%|%%%|%|.|%|. |%|                      ......|%|       ..|%| |%|.  ||   "<<endl;
cout<<" ||..|%|  |%|   |%|..    %%%%%%%%%%%%%%%%%%       ......|%|  G     .|%|.      ||   "<<endl;
cout<<" ||..|%|  |%|   |%|..                ...|%|          %%%%%%       . |%|.      ||   "<<endl;
cout<<" ||..|%|            .         G      ...|%|                   |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|  %%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%%     |%| ..|%|%%%%   ||   "<<endl;
cout<<" ||.......................................................    |%| ..........  ||   "<<endl;
cout<<" ||    ...................................................          ........  ||   "<<endl;
cout<<" ||..|%|  |%|  |%|..     %%%%%%%%%%%%%%      ..........|%|    |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|  |%|  |%|..             ...|%|    G      %%%%%%%%    |%| ..|%|.      ||   "<<endl;
cout<<" ||..|%|           .      G      ...|%|                       |%| ..|%|.      ||   "<<endl;
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
	Sleep(150);	

}

void clearpacman(int x , int y)
{
	gotoxy(x,y);
	cout<<" ";
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