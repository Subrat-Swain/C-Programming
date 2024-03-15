// Write a Program to input a character. Display its ASCII code.

#include<stdio.h>

    int main ()
        {
            char a ;
            printf("Enter a Character:");
        
            scanf("%c",&a);

            printf("\nASCII code of %c is %d", a, a);

        return 0;
        }