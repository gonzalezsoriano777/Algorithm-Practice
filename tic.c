#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// This is the remake of the game, where we actually play a tic tac toe game
void drawBoard();


// Array used for Spaces, Characters, and overall shaping of board
char boardGame[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // Including the index, it will be 9 but will be counted up from 0 to 10

// Checks to see who won
int didWin();

int main(void)
{

    int player = 1;
    int i = 0;
    int position;

    char put;
    do
    {
        drawBoard();

        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &position);

        put = (player == 1) ? 'X' : 'O';

        // Give you the option on where you want to place your "X, O" depending on the player you are
        if (position == 1 && boardGame[1] == '1')
            boardGame[1] = put;

        else if (position == 2 && boardGame[2] == '2')
            boardGame[2] = put;

        else if (position == 3 && boardGame[3] == '3')
            boardGame[3] = put;

        else if (position == 4 && boardGame[4] == '4')
            boardGame[4] = put;

        else if (position == 5 && boardGame[5] == '5')
            boardGame[5] = put;

        else if (position == 6 && boardGame[6] == '6')
            boardGame[6] = put;

        else if (position == 7 && boardGame[7] == '7')
            boardGame[7] = put;

        else if (position == 8 && boardGame[8] == '8')
            boardGame[8] = put;

        else if (position == 9 && boardGame[9] == '9')
            boardGame[9] = put;

        else
        {
            printf("Invalid move\n");

            player--;
            getchar();
        }
        // i = didWin();

        player++;
    }
        while (i ==  - 1);

        drawBoard();
        if (i == 1)
            printf("==>\aPlayer %d win ", --player);
        else
            printf("==>\aGame draw");

        getchar();

        return 0;
}


int didWin()
{
    // The Different ways in which someone can win, and checks to see those ways that are valid

    if (boardGame[1] == boardGame[2] && boardGame[2] == boardGame[3])
        return 1;

    else if (boardGame[4] == boardGame[5] && boardGame[5] == boardGame[6])
        return 1;

    else if (boardGame[7] == boardGame[8] && boardGame[8] == boardGame[9])
        return 1;

    else if (boardGame[1] == boardGame[4] && boardGame[4] == boardGame[7])
        return 1;

    else if (boardGame[2] == boardGame[5] && boardGame[5] == boardGame[8])
        return 1;

    else if (boardGame[3] == boardGame[6] && boardGame[6] == boardGame[9])
        return 1;

    else if (boardGame[1] == boardGame[5] && boardGame[5] == boardGame[9])
        return 1;

    else if (boardGame[3] == boardGame[5] && boardGame[5] == boardGame[7])
        return 1;

    else if (boardGame[1] != '1' && boardGame[2] != '2' && boardGame[3] != '3' &&
            boardGame[4] != '4' && boardGame[5] != '5' && boardGame[6] != '6' && boardGame[7]
            != '7' && boardGame[8] != '8' && boardGame[9] != '9')

        return 0;
    else
        return  - 1;
}

void drawBoard()
{

}




// Taking a different approach

// void drawBoard()
// {
//     int i;

//     int xCounter = 0;
//     int oCounter = 0;

//     for (i = 0; i < 9; i++)
//     {
//         boardGame[i] = ' ';

//         if (i % 2 == 1)
//         {
//             boardGame[i] = 'O';
//             oCounter++;
//         } else
//         {
//             boardGame[i] = 'X';
//             xCounter++;
//         }
//     }

//     printf(" %c | %c | %c\n", boardGame[0], boardGame[1], boardGame[2]);
//     printf(" +--+--+--+\n");
//     printf(" %c | %c | %c\n", boardGame[3], boardGame[4], boardGame[5]);
//     printf(" +--+--+--+\n");
//     printf(" %c | %c | %c\n", boardGame[6], boardGame[7], boardGame[8]);

//     printf("Well X always marks the spot!\n");
//     printf("X won with %i\n", xCounter);
//     printf("While O had %i\n", oCounter);
// }

