#include <stdio.h>

int main()
{

    // int marks[2][3] = {
    //     {78, 63, 98},
    //     {54, 67, 17}};

    // marks[0][1] = 71;

    // printf("%d\n", marks[1][2]);

    // int marks[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter the value for marks[%d][%d] :  ", i, j);
    //         scanf("%d", &marks[i][j]);
    //     }
    // }

    // printf("\nAll data set....\n");

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("the value of marks[%d][%d] value is %d.\n", i, j, marks[i][j]);
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d    ", marks[i][j]);
    //     }

    //     printf("\n");
    // }

    int marks[2][3][4] =
        {
            {{1, 2, 3, 4}, {5, 6, 7, 8}, {6, 5, 3, 2}},
            {{1, 5, 6, 8}, {8, 9, 3, 0}, {5, 2, 7, 8}}};

    printf("%d", marks[0][2][2]);

    return 0;
}