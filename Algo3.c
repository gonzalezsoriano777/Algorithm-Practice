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
    int j;
    int board = 0;

    for(i = 0; i < 5; i++)
    {
        board[i] = ' ';
        printf("----+----\n");
        for(j = 0; j < 6; j++)
        {
            board[j] = ' ';
            printf("----+----\n");
        }
    }


}


