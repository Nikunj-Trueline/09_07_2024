/*




*/

#include <stdio.h>

int main()
{

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (i == 1 || i == 5 || j == 1 || j == 5)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int k = 4; k >= i; k--)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int k = 1; k < i; k++)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 5; j >= i; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*

    *****
     *****
      *****
       *****
        *****

    */

    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int k = 1; k < i; k++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (i + j == 6 || i == 5 || j - i == 4)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }

    //     printf("\n");
    // }

    for (int i = 1; i <= 5; i++)
    {

        for (int k = 5; k > i; k--)
        {
            printf("  ");
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}