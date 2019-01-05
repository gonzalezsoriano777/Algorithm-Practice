#include <stdio.h>
#include <string.h>

// #define string char*
// Algorithm for this/that.. changing a string into another string

int compareString(char *, char *, int );


int main(void)
{
    // char *string1 = "this";
    // char *string2 = "that";
    // int counter = 0;
    // char arr[] = {1, 2., 3};


    compareString("bear", "this", 4);
}

int compareString(char *str1 , char *str2, int len)
{
    int counter = 0;
    int diff = 0;

    for(int i = 0; i < strlen(str1) ;i++)
    {
        diff = str2[i] - str1[i];
        printf("%i\n", diff);
    }

    return 0;
}

