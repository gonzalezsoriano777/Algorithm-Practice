#include <stdio.h>
#include <cs50.h>

// This is the remake of the game, where we actually play a tic tac toe game
void drawBoard();


int main(void)
{
    drawBoard();
    return 0;
}

void drawBoard()
{
    char board[9];
    int i;

    for (i = 0; i < 9; i++)
    {
        if(i % 2 == 1)
        {
            board[i] = 'X';
        } else
        {
            board[i] = 'O';
        }
    }
          printf(" %c | %c | %c \n", board[0], board[1], board[2]);
          printf("----+----\n");
          printf(" %c | %c | %c \n", board[3], board[4], board[5]);
          printf("----+----\n");
          printf(" %c | %c | %c \n", board[6], board[7], board[8]);
          printf("Well guess O always marks the spot!\n");

    }