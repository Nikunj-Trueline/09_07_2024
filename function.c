/*

Function:

    it is block of code which perform specific task.

    Two types of function existing in c.
    1. Built-in function()
    2. User define function().

    syntax :

     void calculator()
     {
       // block of code
     }

     returnType funName()
     {
      // function body.
     }

*/

#include <stdio.h>

// function definanation
void mySelf()
{

    printf("Myself Nikunj Asodariya. Hello Friends how are you all ?\n");
}

int main()
{

    // function calling
    for (int i = 0; i < 100; i++)
    {
        mySelf();
    }

    return 0;
}