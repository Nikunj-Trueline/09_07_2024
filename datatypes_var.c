/*

Variables.
    - variables is one kind of container which store the any kind of data.

    data. images    file
          text       viedo   audio

          1234, 76876,0.89,a,j,6823.....


datatypes.
        - datatypes help to us which types of data variable can hold.


     Four Types of datatypes existing in c programming.

     integer -  int -  without decimal points number - 4 bytes  -  %d
     floating point  - float -  with decimal number  - 4 byte   -   %f
     double   - double  - with decimal number     - 8 bytes     - %lf
     charcater   - char   -  single chracter   - 1 bytes     - %c

         - noraml character - A B C D h d j h k l 1 2 3 4 6
         - special character -  $  ^  *  #   )  %  @ !

*/

#include <stdio.h>

int main()
{

    // variable declaration
    int a;

    // variable intilization
    a = 30;

    // variable decalartion with variable intilization
    char status = 'T';

    // update the variable values
    status = '#';

    printf("This program is for varibles and datatypes.\n");

    int var1 = 234;
    float num = 6.69;               // 5
    double decimal = 63.9685745896; // 9-10
    char name = 'N';

    // int var1 = 890;

    // printf("The value of var1 is %d.", var1);
    // printf("\nThe value of num is %.3f.", num);
    // printf("\nThe value of decimal is %lf.", decimal);
    // printf("\nThe value of name is %c.", name);

    printf("The value of vatr1 is %d and the value of num is %f and the value of decimal is %.3lf and the value of name is %c", var1, num, decimal, name);

    return 0;
}