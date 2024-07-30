#include <stdio.h>

int main()
{

    printf("Print the value between 1 to 10.\n");

    /*
    for(intilization; condition; updation)
    {
       // block of code
    }
    */

    for (int i = 1; i <= 10; i++) // outer
    {
        printf("\n\n%d\n", i);

        for (int j = 1; j <= 5; j++) // inner
        {
            printf("%d\n", j);
        }
    }

    return 0;
}