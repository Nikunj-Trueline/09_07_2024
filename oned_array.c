#include <stdio.h>

int main()
{

    //  int marks[100] = {1, 65, 35, 98, 62};

    // char name[10] = {'A', 'B', 'c', 'd'};

    int marks[5];

    // printf("%c", name[4]);

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d subject marks : ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d     ", marks[i]);
    }
}