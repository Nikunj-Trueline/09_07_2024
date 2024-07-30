#include <stdio.h>

int main()
{

    int num;

    printf("Enter a number for print reverse order : ");
    scanf("%d", &num);

    int sum = 0;

    while (num > 0) // 0>0
    {
        int lastDigit = num % 10;

        sum = sum + lastDigit;

        printf("%d", lastDigit);

        num = num / 10;
    }

    printf("\n\n %d ", sum);
}