/*

operator.

1. Arithmetic operator
    +   -   *   /   %

2. Assignment operator
   +=  -=  *=  /=   %=

3. Relational operator
    <   >   <=   >=  ==  !=

4. logical operator.
    &&   ||   !

5. Ternary operators.

*/

#include <stdio.h>

int main()
{

    int a = 20;
    int b = 10;

    printf("--------ARITHMETIC OPERATOR--------\n");
    printf("The sum of  a and b is %d\n", a + b);
    printf("The sub of  a and b is %d\n", a - b);
    printf("The mul of  a and b is %d\n", a * b);
    printf("The div of  a and b is %d\n", a / b);
    printf("The mod of  a and b is %d\n\n", a % b);

    printf("--------ASSIGNMENT OPERATOR--------\n");

    // a = 20 b = 10

    printf("+= : %d\n", a += b); // a=a+b;     // a= 30
    printf("-= : %d\n", b -= a); // b = b-a;    // b = -20
    printf("*= : %d\n", b *= a); // b = b*a;  // b = -600
    printf("*= : %d\n", b /= a); // b = b/a;  // b = -20
    //  ??

    printf("--------RELATIONAL OPERATOR--------\n");

    // true = 1  ||   false = 0

    int c = 20;
    int d = 21;

    printf("lessthan operator : %d\n", c < d);        //  0
    printf("greaterthan  operator : %d\n", c > d);    //  1
    printf("lessthan or equal to : %d\n", c <= d);    //  1
    printf("greaterthan or equal to : %d\n", c >= d); //  1
    printf("equal to : %d\n", c == d);                //  0
    printf("equal to : %d\n", c != d);                //  0

    printf("--------LOGICAL OPERATOR--------\n");

    printf("Logical and operator : %d\n", (c < d) && (c < d)); // 1
    printf("Logical Or operator : %d\n", (c > d) || (c > d));  // 1
    printf("Logical Or operator : %d\n", !(c < d));            // 0

    /*
    Increment and decrement operator

     a = 10
    Increment operator  ++    a++     ++a   a = 11
    Decrement operator  --    a--     --a   a = 10

    prefix    ++a
    postfix    a++

    */

    int x = 10;

    printf("\n\n------------------------------\n");

    printf("The value of x is : %d\n", x);   // 10
    printf("The value of x is : %d\n", x--); //  10   9
    printf("The value of x is : %d\n", --x); // 8

    // x++; //  postfix increment
    // printf("The value of x is : %d\n", x);
    // x++; //  postfix increment
    // printf("The value of x is : %d\n", x);

    printf("--------TERNARY OPERATOR--------\n");

    int y = 10;
    int z = 20;

    //   condition ?  statment 1 :  statment2 ;
    y > z ? printf("true part") : printf("false part");

    return 0;
}