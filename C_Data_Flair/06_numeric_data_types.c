/*
    Integer Representation in C language:--

        decimal:-  0-9 base 10                                |
                                                    |
        octal:- 0-7 base 8                                   |o/p:-> decimal
                                                    |
        hexadecimal:-  0-15  base 16     
                       0-9 :-
                       10-  A
                       11 - B
                       12 - C
                       13 - D
                       14 - E
                       15 - F                             |

    int a = 13; ------> Decimal

    int a = 013;    --------> Octal           ------->Result i.e: output:---> Decimal

    int a = 0x13  --------> hexadecimal

*/
#include<stdio.h>

// void main()
// {
//     int a = 013;       // Input octal

//     printf("%d", a);  // Result is in decimal
// }

// void main()
// {
//     int a = 0121;       // Input Hexadecimal

//     printf("%d", a);    // Result in Decimal
// }

// void main()
// {
//     int a = 0x13;       // Input Hexadecimal   actual number is 13:- 3 * 16 ^ 0 + 1 * 16 ^ 1 = 19 decimal
//     printf("%d",a);     // Result in Decimal
// }

// void main()
// {
//     int a = 012+0x15;    // Octal and hexadecimal input

//     printf("%d",a);     //
// }

void main(){
    int a = 0xDAD;
    printf("%d",a);
}