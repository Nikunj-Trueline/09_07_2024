#include <stdio.h>

/*
  *****
  *****
  *****
  *****
  *****

 *
 **
 ***
 ****
 *****

 *****
 ****
 ***
 **
 *


*/

int main()
{

    // for (int i = 1; i <= 5; i++) // row
    // {
    //     for (int j = 1; j <= 5; j++) // column
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     // first row

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++) // row
    // {
    //     for (int j = 5; j >= i; j--) // column    4>=5
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    char ch = 'A';

    for (char i = '!'; i <= '%'; i++)
    {
        for (char j = '!'; j <= i; j++)
        {
            printf("%c ", j);
        }

        printf("\n");
    }
}

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


A
B B
C C C
D D D D
E E E E E


*/