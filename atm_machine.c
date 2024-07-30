#include <stdio.h>

int main()
{

    int amount;
    int note500, note200, note100, note50, note20, note10, note5, note2, note1;

    note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter The amount.");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        note500 = amount / 500;          // 1
        amount = amount - note500 * 500; // 300
    }

    if (amount >= 200)
    {
        note200 = amount / 200;          // 1
        amount = amount - note200 * 200; // 100
    }

    if (amount >= 100)
    {
        note100 = amount / 100;          // 1
        amount = amount - note100 * 100; // 0
    }

    if (amount >= 50)
    {
        note50 = amount / 50;
        amount = amount - note50 * 50;
    }

    if (amount >= 20)
    {
        note20 = amount / 20;
        amount = amount - note20 * 20;
    }

    if (amount >= 10)
    {
        note10 = amount / 10;
        amount = amount - note10 * 10;
    }

    if (amount >= 5)
    {
        note5 = amount / 5;
        amount = amount - note5 * 5;
    }

    if (amount >= 2)
    {
        note2 = amount / 2;
        amount = amount - note2 * 2;
    }

    if (amount >= 1)
    {
        note1 = amount / 1;
        amount = amount - note1 * 1;
    }

    printf("Note is : \n");
    printf("500 Note is : %d\n", note500);
    printf("200 Note is : %d\n", note200);
    printf("100 Note is : %d\n", note100);
    printf("50 Note is : %d\n", note50);
    printf("20 Note is : %d\n", note20);
    printf("10 Note is : %d\n", note10);
    printf("5 Note is : %d\n", note5);
    printf("2 Note is : %d\n", note2);
    printf("1 Note is : %d\n", note1);
}