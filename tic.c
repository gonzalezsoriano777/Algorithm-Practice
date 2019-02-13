#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// This is the remake of the game, where we actually play a tic tac toe game
void drawBoard();





// Array used for Spaces, Characters, and overall shaping of board
char boardGame[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'}; // Including the index, it will be 9 but will be counted up from 0 to 10

// Checks to see who won
int didWin();

int main(void)

// This will also inlcude the importBoard since it will grab the token of both X and O and the state,
//where the player can pick the position of where they want to place the X or O

{

    int player = 1; // players (Only 2)
    int i = 0;
    int select; // option to pick a space for the selected character

    char choice; // Once chosen it's marked  by choice
    do
    {
        drawBoard(); // calls the board itself

        player = (player % 2) ? 1 : 2; // if the player is odd then it's player 1 else player 2

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &select);

        choice = (player == 1) ? 'O' : 'X'; // represents what player 1 and player will have whether it's odd or even

        // the state of both X and O in the board
        if (select == 1 && boardGame[1] == '1')
            boardGame[1] = choice;

        else if (select == 2 && boardGame[2] == '2')
            boardGame[2] = choice;

        else if (select == 3 && boardGame[3] == '3')
            boardGame[3] = choice;

        else if (select == 4 && boardGame[4] == '4')
            boardGame[4] = choice;

        else if (select == 5 && boardGame[5] == '5')
            boardGame[5] = choice;

        else if (select == 6 && boardGame[6] == '6')
            boardGame[6] = choice;

        else if (select == 7 && boardGame[7] == '7')
            boardGame[7] = choice;

        else if (select == 8 && boardGame[8] == '8')
            boardGame[8] = choice;

        else if (select == 9 && boardGame[9] == '9')
            boardGame[9] = choice;


        else
        {
            printf("Invalid move ");

            player--;
            getchar();
        }

        i = didWin();

        player++;


    }

        while (i ==  - 1);

        drawBoard();

        if (i == 1)
            printf("Player %d wins!\n Winner Winner Chicken Dinner!!\n", --player);
        else
            printf("Game is a draw\n");

        getchar();

        return 0;

}

void drawBoard()
{

        printf("This is the Tic Tac Toe Game\n");

        printf("Player1 will be (X) --- Player2 will be (O)\n\n");

        printf(" %c | %c | %c\n", boardGame[1], boardGame[2], boardGame[3]);

        printf(" +--+--+--+\n");

        printf(" %c | %c | %c\n", boardGame[4], boardGame[5], boardGame[6]);

        printf(" +--+--+--+\n");

        printf(" %c | %c | %c\n\n", boardGame[7], boardGame[8], boardGame[9]);

}





int didWin() // While be Identified as 'isValidMove as well'
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