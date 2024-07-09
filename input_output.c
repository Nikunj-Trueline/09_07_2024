/*

output - printf
input  -  scanf

write a program to input two value from user and sum of this two value.

& - address operator

*/

#include <stdio.h>

int main()
{

    int a;
    int b;

    printf("Enter the value for a : ");
    scanf("%d", &a);

    printf("Enter the value for b : ");
    scanf("%d", &b);

    // printf("The sum of a and b is : %d", a + b);
    printf("The sum of a and b is : %lf", 3.14524525);

    return 0;
}