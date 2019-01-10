#include <stdio.h>

void DrawBoard();


int main(void)
{

    DrawBoard();
    return 0;
}


void DrawBoard()
{

    int i;
    char boardGame[9];


    for(i = 0; i < 9; i++)
    {
       boardGame[i] = ' ';

    }
       printf(" %c | %c | %c \n", boardGame[0], boardGame[1], boardGame[2]);
       printf("----+----\n");
       printf(" %c | %c | %c \n", boardGame[3], boardGame[4], boardGame[5]);
       printf("----+----\n");
       printf(" %c | %c | %c \n", boardGame[6], boardGame[7], boardGame[8]);

    }





