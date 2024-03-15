/*
    character data types are enclosed wiht single quote and variable type should be char

    Character take 1 byte i.e 8 bits

    Range:- 0-255   as 2 ^ 8 = 256

*/

// #include<stdio.h>
// void main()
//     {
//         char a;
//         a = 'b';
//         printf("%c",a);// %c is used as format specifier for char
//     }

    /* Write a program to enter a character from user and print it's ASCII Code */
    // Implicit Type Conversion
    // #include<stdio.h>
    // void main()
    //     {
    //         char ch;
    //         printf("Enter A character:");
    //         scanf("%c",&ch);
    //         printf("\nASCII Code Of %c is %d",ch,ch);
    //     }

    /* 3-Ways to take input a character in c :-
            1.scanf() :- Display Format
            2.getch()   :- Hidden Format
            3.getche()  :- Display format e for echo i.e display
    */

//    #include<stdio.h>

//     void main()
//         {
//             char ch;
//             printf("Enter Password");
//             ch = getch(); // It takes input direct to the memory without visible on the console screen until we print it
//             // printf("%c",ch);
//         }


/* Write a program to take input of 4 character password from the user */
#include<stdio.h>
void main ()
    {
        char ch1, ch2, ch3, ch4;
        printf("Enter Your Password:");
        ch1 = getch();
        printf("*");
        ch2 = getch();
        printf("*");
        ch3 = getch();
        printf("*");
        ch4 = getch();
        printf("*");

        // printf("\n%c%c%c%c",ch1,ch2,ch3,ch4);
    }