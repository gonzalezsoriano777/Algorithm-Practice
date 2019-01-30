#include <stdio.h>
#include <cs50.h>

// This is the remake of the game, where we actually play a tic tac toe game
void drawBoard();


// New array that will be put into the old array
char boardGame[9] = {'1', '2', '3', '4', '5', '6', '7', '8'};

void importBoard(char string[]);

int main(void)
{

    drawBoard();
    return 0;
}

void drawBoard()
{
    int i;
    char board[9];

    int xCounter = 0;
    int oCounter = 0;

    for (i = 0; i < 9; i++)
    {
        board[i] = ' ';

        if (i % 2 == 1)
        {
            board[i] = 'O';
            oCounter++;
        } else
        {
            board[i] = 'X';
            xCounter++;
        }
    }

    printf(" %c | %c | %c\n", board[0], board[1], board[2]);
    printf(" +--+--+--+\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf(" +--+--+--+\n");
    printf(" %c | %c | %c\n", board[6], board[7], board[8]);

    printf("Well X always marks the spot!\n");
    printf("X won with %i\n", xCounter);
    printf("While O had %i\n", oCounter);
}

void importBoard(char string[3])
{

    int i;

    for (i = 0; i < 9; i++)
    {
        string[i] = "";
    }
}