#include <stdio.h>

int main()
{

    int a = 10;
    char name = 'T';

    // implicit type conversation.
    int sum = a + name;

    // explicit type conversation.

    float pi = 3.14;
    int store = sum; // 3.14 + 94

    int data = (int)pi + store;

    printf("%d\n", data);

    printf("%d\n", sum);

    return 0;
}