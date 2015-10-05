#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main (void)
{
    /*declaring global variables*/
    int row;
    int height;
    int hash;
    /*request user input of range 0 - 23*/
    do {
           printf("Please enter the height:");
           height = GetInt();
       }
    while (0 > height || height > 23);

    for (row =0; row < height; row++)
       {
           int space = height-1;
           while (space >= row)
              {
                 printf(" ");
                 space--;
              }
           for (hash=0; hash<=row+1; hash++)
              {
                 printf("#");
              }
           printf("\n");
       }
}



