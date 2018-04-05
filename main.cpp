//Author: Cristina Perez
#include <iostream>

using namespace std;

//GLOBAL CONSTANTS
const int ROWS = 3;
const int COLUMNS = 3;
const char BLANK = ' ';
const char X = 'X';
const char O = 'O';
const int QUIT = -1;
char winner = ' ';

int main()
{
  //3x3 matrix of characters, initially with blank spaces in each position
  char board[ROWS][COLUMNS] = {{BLANK, BLANK, BLANK},
                               {BLANK, BLANK, BLANK},
                               {BLANK, BLANK, BLANK}};

  char turn = X; //Player X always goes first
  int row;
  int column;
  bool playing = true; //Continue playing by default

  do
  {
    cout<<turn<<"'s turn.\n";
    cout<<"Which column and row (0-2, or -1 for both to quit)?\n";
    cin>>column;
    cin>>row;

    //Make sure the user isn't quitting
    if(column == QUIT && row == QUIT)
    {
      playing = false;
    }
    //Print error if the column and/or row is out of bounds of 0-2
    else if( column < 0 || row < 0 || column > 2 || row > 2 )
    {
      cout<<"Values must be between 0 and 2.\n";
      turn = O;
    }
    else
    {
    board[row][column] = turn;
    }
  if( turn == X)
  {
    turn = O;
  }
  else
  {
    turn = X;
  }
    
   cout<<"\nBOARD\n-----\n";
   for(int r = 0; r < ROWS; r++)
   {
     for(int c = 0; c < COLUMNS; c++)
     {
        cout<<board[r][c]<<" ";
     }
     cout<<endl;
   }
if( board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][0] == board[0][2])
{
 playing = false;
 winner = board[0][0];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[0][0] != ' ' && board[0][0] == board[1][0] && board[0][0] == board[2][0])
{
 playing = false;
 winner = board[0][0];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
{
 playing = false;
 winner = board[0][0];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[1][1] != ' ' && board[1][1] == board[0][1] && board[1][1] == board[2][1])
{
 playing = false;
 winner = board[1][1];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[1][1] != ' ' && board[1][1] == board[1][0] && board[1][1] == board[1][2])
{
 playing = false;
 winner = board[1][1];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[1][1] != ' ' && board[1][1] == board[0][2] && board[1][1] == board[2][0])
{
 playing = false;
 winner = board[1][1];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[2][2] != ' ' && board[2][2] == board[2][0] && board[2][2] == board[2][1])
{
 playing = false;
 winner = board[2][2];
 cout<<"Winner is "<<winner<<endl;
}
else if(board[2][2] != ' ' && board[2][2] == board[0][2] && board[2][2] == board[1][2])
{
 playing = false;
 winner = board[2][2];
 cout<<"Winner is "<<winner<<endl;
}
  }while( playing );

  cout<<"Goodbye!\n";

  return 0;
}
