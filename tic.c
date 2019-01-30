#include <stdio.h>
#include <cs50.h>

// This is the remake of the game, where we actually play a tic tac toe game
void drawBoard();


// Array used for Spaces, Characters, and overall shaping of board
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

    int xCounter = 0;
    int oCounter = 0;

    for (i = 0; i < 9; i++)
    {
        boardGame[i] = ' ';

        if (i % 2 == 1)
        {
            boardGame[i] = 'O';
            oCounter++;
        } else
        {
            boardGame[i] = 'X';
            xCounter++;
        }
    }

    printf(" %c | %c | %c\n", boardGame[0], boardGame[1], boardGame[2]);
    printf(" +--+--+--+\n");
    printf(" %c | %c | %c\n", boardGame[3], boardGame[4], boardGame[5]);
    printf(" +--+--+--+\n");
    printf(" %c | %c | %c\n", boardGame[6], boardGame[7], boardGame[8]);

    printf("Well X always marks the spot!\n");
    printf("X won with %i\n", xCounter);
    printf("While O had %i\n", oCounter);
}

void importBoard(char string[3])
{

    int i;

    for (i = 0; i < 9; i++)
    {
        // string[i] = "";
    }
}