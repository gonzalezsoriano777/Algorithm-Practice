#include <stdio.h>
#include <cs50.h>

// This is the remake of the game, where we actually play a tic tac toe game
void drawBoard();

// sets the moves, size and players for "isValid function"
#define firstPlayer 1
#define secondPlayer 2
#define ROW 3
#define COLUMN 3
#define xToken X
#define oToken O

// New array that will be used and passed onto my old board Array
char storeData[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};


void importBoard(char string[]);

void isValid(char *);

int main(void)
{
     drawBoard();
    return 0;
}

void drawBoard()
{
    int i;
    char board[9];

    int xCount = 0;
    int oCount = 0;

    for (i = 0; i < 9; i++)
    {
        if(i % 2 == 1)
        {
            board[i] = 'O';
            oCount ++;
        } else
          {
            board[i] = 'X';
            xCount ++;
          }
    }
          printf(" %c | %c | %c \n", board[0], board[1], board[2]);
          printf("----+----\n");
          printf(" %c | %c | %c \n", board[3], board[4], board[5]);
          printf("----+----\n");
          printf(" %c | %c | %c \n", board[6], board[7], board[8]);


          printf("Well guess X always marks the spot!\n");
          printf("X won and had %i\n", xCount);
          printf("While Y had %i\n", oCount);

    }

// Importing the state of how many X  and O's will be placed in the board
void importBoard(char string[])
{
    int import = 0;

    // Not sure if this array will serve to any use
    // char state[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};

    for (int x = 0; x < 9; x++)
    {
        if (storeData[0])
        {
            import = string[xToken];
        } else {
            import = string[oToken];
        }
    }


}
