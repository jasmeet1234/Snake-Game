#include<bits/stdc++.h>
#include <windows.h>
#include<conio.h>
using namespace std;
bool gameOver;
const int width = 75;		//width of the playground
const int height = 25;		//height of the playground
int x, y, jk, fruitX, fruitY, score;	//position of ball and snake
int tailX[100], tailY[100];
int nTail;
enum eDirecton
{ STOP = 0, LEFT, RIGHT, UP, DOWN };	//controls
eDirecton dir;


class game1

{

public:
int over ()
  {


for (int i = 0; i < 51; i++)

      {

if (i == 50)

	  {
	    cout <<endl<<endl<<endl<< "Press any key to continue................\n";

while (1)

	      {
		if (kbhit ())

		  {
		    int flag = 666;

return flag;

}

}

}

system ("clear");

if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6
	     || i == 7)

	  {

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";

}

if (i == 8 || i == 9 || i == 10 || i == 11 || i == 12 || i == 13
	     || i == 14)

	  {


cout <<
	      "                  #     # #     # #     # #          #     #   # #   #       #    #\n";

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";

}

if (i == 15 || i == 16 || i == 17 || i == 18 || i == 19 || i == 20
	     || i == 21)

	  {

cout <<
	      "                  #     # ####### #     # #          #     #  #   #  #       #   #\n";

cout <<
	      "                  #     # #     # #     # #          #     #   # #   #       #    #\n";

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";

}

if (i == 22 || i == 23 || i == 24 || i == 25 || i == 26 || i == 27
	     || i == 28)

	  {

cout <<
	      "                  #  #### #     # #  #  # #####      #     # #     # #####   ######\n";

cout <<
	      "                  #     # ####### #     # #          #     #  #   #  #       #   #\n";

cout <<
	      "                  #     # #     # #     # #          #     #   # #   #       #    #\n";

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";

}

if (i == 29 || i == 30 || i == 31 || i == 32 || i == 33 || i == 34
	     || i == 35)

	  {

cout <<
	      "                  #        #   #  # # # # #          #     # #     # #       #     #\n";

cout <<
	      "                  #  #### #     # #  #  # #####      #     # #     # #####   ######\n";

cout <<
	      "                  #     # ####### #     # #          #     #  #   #  #       #   #\n";

cout <<
	      "                  #     # #     # #     # #          #     #   # #   #       #    #\n";

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";

}

if (i == 36 || i == 37 || i == 38 || i == 39 || i == 40 || i == 41
	     || i == 42)

	  {

cout <<
	      "                  #     #   # #   ##   ## #          #     # #     # #       #     #\n";

cout <<
	      "                  #        #   #  # # # # #          #     # #     # #       #     #\n";

cout <<
	      "                  #  #### #     # #  #  # #####      #     # #     # #####   ######\n";

cout <<
	      "                  #     # ####### #     # #          #     #  #   #  #       #   #\n";

cout <<
	      "                  #     # #     # #     # #          #     #   # #   #       #    #\n";

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";

}

if (i == 43 || i == 44 || i == 45 || i == 46 || i == 47 || i == 48
	     || i == 49)

	  {

cout <<
	      "                   #####     #    #     # #######    ####### #     # ####### ######\n";

cout <<
	      "                  #     #   # #   ##   ## #          #     # #     # #       #     #\n";

cout <<
	      "                  #        #   #  # # # # #          #     # #     # #       #     #\n";

cout <<
	      "                  #  #### #     # #  #  # #####      #     # #     # #####   ######\n";

cout <<
	      "                  #     # ####### #     # #          #     #  #   #  #       #   #\n";

cout <<
	      "                  #     # #     # #     # #          #     #   # #   #       #    #\n";

cout <<
	      "                   #####  #     # #     # #######    #######    #    ####### #     #\n";


}

}
  }

};


void
Setup ()
{

gameOver = false;

dir = STOP;

x = width / 2;

y = height / 2;

fruitX = rand () % width;	//fruit at random location
  fruitY = rand () % height;

score = 0;			//score
}
void
clearScreen ()
{

HANDLE hOut;

COORD Position;


hOut = GetStdHandle (STD_OUTPUT_HANDLE);


Position.X = 0;

Position.Y = 0;

SetConsoleCursorPosition (hOut, Position);

}
void

Draw ()
{

clearScreen ();


for (int i = 0; i < width + 2; i++)

cout << "#";

cout << endl;


for (int i = 0; i < height; i++)

    {

for (int j = 0; j < width; j++)

	{


if (j == 0)

cout << "#";

if (i == y && j == x)

cout << "O";

	  else if (i == fruitY && j == fruitX)

cout << "F";

	  else

	    {

bool print = false;

for (int k = 0; k < nTail; k++)

		{

if (tailX[k] == j && tailY[k] == i)

		    {

cout << "o";

print = true;

}

}

if (!print)

cout << " ";

}



if (j == width - 1)

cout << "#";

}

cout << endl;

}


for (int i = 0; i < width + 2; i++)

cout << "#";

cout << endl;

cout << "Score:" << score << endl;

}

void

Input ()
{

if (kbhit ())		//kbhit is used to determine if key has been pushed or not
    {

switch (getch ())

	{

case 'a':

dir = LEFT;

break;

case 'd':

dir = RIGHT;

break;

case 'w':

dir = UP;

break;

case 's':

dir = DOWN;

break;

case 'x':

gameOver = true;

break;

}

}

}



void
Logic ()
{

int prevX = tailX[0];

int prevY = tailY[0];

int prev2X, prev2Y;

tailX[0] = x;

tailY[0] = y;

for (int i = 1; i < nTail; i++)

    {

prev2X = tailX[i];

prev2Y = tailY[i];

tailX[i] = prevX;

tailY[i] = prevY;

prevX = prev2X;

prevY = prev2Y;

}
switch (dir)		//controlling the position of snake
    {

case LEFT:

x--;

break;

case RIGHT:

x++;

break;

case UP:

y--;

break;

case DOWN:

y++;

break;

default:

break;

}

if (x >= width)

x = 0;

  else if (x < 0)

x = width - 1;

if (y >= height)

y = 0;

  else if (y < 0)

y = height - 1;


for (int i = 0; i < nTail; i++)

if (tailX[i] == x && tailY[i] == y)

gameOver = true;


if (x == fruitX && y == fruitY)

    {
      cout << '\a';

score += 10;

fruitX = rand () % width;

fruitY = rand () % height;

nTail++;

}

}



void
Logic_2 ()
{

int prevX = tailX[0];

int prevY = tailY[0];

int prev2X, prev2Y;

tailX[0] = x;

tailY[0] = y;

for (int i = 1; i < nTail; i++)

    {

prev2X = tailX[i];

prev2Y = tailY[i];

tailX[i] = prevX;

tailY[i] = prevY;

prevX = prev2X;

prevY = prev2Y;

}
switch (dir)		//controlling the position of snake
    {

case LEFT:

x--;

break;

case RIGHT:

x++;

break;

case UP:

y--;

break;

case DOWN:

y++;

break;

default:

break;

}

if (x > width || x < 0 || y > height || y < 0)

    {

gameOver = true;

}

for (int i = 0; i < nTail; i++)

if (tailX[i] == x && tailY[i] == y)

gameOver = true;


if (x == fruitX && y == fruitY)

    {
      cout << '\a';

score += 10;

fruitX = rand () % width;

fruitY = rand () % height;

nTail++;

}


}



int
main ()
{
  PlaySound (TEXT ("snakes1.wav"), NULL, SND_FILENAME || SND_SYNC);



game1 obj;

fstream ifile;

string fame;
cout<<  "************************************************************************************************************************\n";
cout << "                                        __             ___\n";

cout <<
    "                                    /         \\     /       \\   WELCOME TO SNAKE\n";

cout << "                                   /  / ~~  \\  \\   /  /~~ \\  \\  WARS\n";

cout << "                                   |  |     |  |   |  |   |  |\n";

cout << "                                   |  |     |  |   |  |   |  |\n";

cout << "                                   |  |     |  |   |  |   |  |       /\n";

cout << "                                   |  |     |  |   |  |   |  |     //\n";

cout << "                                  (o  o)    \\  \\__/  /     \\  \\__/ /\n";

cout << "                                   \\__/      \\      /       \\     /\n";

cout << "                                    |          ~~~            ~~~~\n";

cout << "                                    ^\n\n";
cout<<  "                                                                               BY: JASMEET SINGH";
cout<<  "\n\n************************************************************************************************************************\n";
string name;

cout << "\nEnter your name:\n";

cin >> name;

cout <<

"\nCONTROLS:\nW to move forwards\nS to move backwards\nA to move left\nD to move right\nPress any key to continue................\n";

while (1)

    {

if (kbhit ())

	{

tag1:cout <<

"\nENTER THE GAME MODE:\n(1) EASY: No death on touching the walls\n(2) MEDIUM: Death on touching the walls\n(3) Hall of Fame\n(4) Exit\n";

int num;

cin >> num;

Setup ();

switch (num)

	    {

case 1:
	      system ("clear");


cout <<
		"                                                                                              __\n";

cout <<
		"                                                                                             {0O}\n";

cout <<
		"                                                                                             \\__/\n";

cout <<
		"                                                                                             /^/\n";

cout <<
		"                                                                                            ( (\n";

cout <<
		"                                                                                            \\_\\_____\n";

cout <<
		"                                                                                           (_______)\n";

cout <<
		"                                                                                          (_________()Oo\n";

cout << endl << endl;

cout <<
		"                                                                                                      888\n";

cout <<
		"                                                                                                      888\n";

cout <<
		"                                                                              .d8888b 88888b.  8888b. 888  888 d88b.\n";

cout <<
		"                                                                              88K     888 ,88b    ,88b888 ,88Pd8P  Y8b\n";

cout <<
		"                                                                              ,Y8888b.888  888.d888888888888K 88888888\n";

cout <<
		"                                                                                   X88888  888888  888888 ,88bY8b.\n";

cout <<
		"                                                                               88888P'888  888,Y888888888  888 ,Y8888\n";

cout << endl << endl << endl << endl << endl;

cout <<
		"                                                                                         BY:JASMEET SINGH\n";

cout <<
		"                                                                                          ";

cout << endl <<
		"                                                                                      Press 'X' to Exit.....";


while (!gameOver)

		{

Draw ();

Input ();

Logic ();

Sleep (10);	//sleep(10);
		}




PlaySound (TEXT ("game_over.wav"), NULL, SND_FILENAME
			  || SND_SYNC);
gameOver = false;
obj.over ();



PlaySound (TEXT ("snakes1.wav"), NULL, SND_FILENAME
			  || SND_SYNC);

system ("clear");

if (ifile)

		{

ifile.open ("scores.txt", ios::trunc);


ifile << "\nEasy Mode: " << name << " : " << score <<
		    endl;
		}

	      else

		{

ifile.open ("scores.txt", ios::out);


ifile << "Easy Mode: " << name << " : " << score << endl;

}

ifile.close ();
gameOver = false;


break;


case 2:

system ("clear");

cout <<
		"                                                                                              __\n";

cout <<
		"                                                                                             {0O}\n";

cout <<
		"                                                                                             \\__/\n";

cout <<
		"                                                                                             /^/\n";

cout <<
		"                                                                                            ( (\n";

cout <<
		"                                                                                            \\_\\_____\n";

cout <<
		"                                                                                           (_______)\n";

cout <<
		"                                                                                          (_________()Oo\n";

cout << endl << endl;

cout <<
		"                                                                                                      888\n";

cout <<
		"                                                                                                      888\n";

cout <<
		"                                                                              .d8888b 88888b.  8888b. 888  888 d88b.\n";

cout <<
		"                                                                              88K     888 ,88b    ,88b888 ,88Pd8P  Y8b\n";

cout <<
		"                                                                              ,Y8888b.888  888.d888888888888K 88888888\n";

cout <<
		"                                                                                   X88888  888888  888888 ,88bY8b.\n";

cout <<
		"                                                                               88888P'888  888,Y888888888  888 ,Y8888\n";

cout << endl << endl << endl << endl << endl;

cout <<
		"                                                                                         BY:JASMEET SINGH\n";

cout <<
		"                                                                                          ";

cout << endl <<
		"                                                                                      Press 'X' to Exit.....";

while (!gameOver)

		{

Draw ();

Input ();

Logic_2 ();

Sleep (10);	//sleep(10);
		}



PlaySound (TEXT ("game_over.wav"), NULL, SND_FILENAME
			    || SND_SYNC);
gameOver = false;
obj.over ();

PlaySound (TEXT ("snakes1.wav"), NULL, SND_FILENAME
			  || SND_SYNC);

system ("clear");

ifile.open ("scores.txt", ios::out);


ifile << "Medium Mode: " << name << " : " << score << endl;


ifile.close ();
gameOver = false;

break;

case 3:

ifile.open ("scores.txt", ios::in);

while (ifile)

		{

getline (ifile, fame);

cout << fame << endl;

}

ifile.close ();

gameOver = false;


break;

case 4:

return 0;

default:

cout << "Wrong option.... Please try again.....\n";

goto tag1;

}

}

}
  system ("pause");

return 0;

}


