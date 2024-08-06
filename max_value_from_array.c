/*

Write a programm to find maximum value from given user array.

9  3  6  4  2

9


*/

#include <stdio.h>

int main()
{

    int array[5];

    // scanf("%d", &array[0]);
    // scanf("%d", &array[1]);
    // scanf("%d", &array[2]);
    // scanf("%d", &array[3]);
    // scanf("%d", &array[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of array[%d] is %d.\n", i, array[i]);
    }

    int max = array[0]; // 7 5 2 1 4  -  7

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max) // 6 >3
        {
            max = array[i]; // max = 6
        }
    }

    printf("\nMaximun value from array is %d.", max);

    return 0;
}