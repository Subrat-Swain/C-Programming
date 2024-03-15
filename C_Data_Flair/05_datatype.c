/*
    Datatype:- 
        Which shows nature of variable like: integer, decimals

    Basic Data Types In C:- int, float, double, char void;
                    
                    int:- Numerical, integer i.e:->28, 32, 192;

                    float:-
                                Deciamals i.e:->28.13, 60.190
                    double:-

                    char:- 'v', 'p', 'x'

                    void:- It doesn't return any thing

*/


// #include<stdio.h>
// void main()
// {
//     int a; // Declaration Of a variable of integer data type should always on top;

//     a = 15.192;
//     printf("%d",a);
//     a = 'z';
//     printf("\n%d", a);
//     a = "Hello";
//     printf("\n%d", a);
    
// }


// Integer Datatype:-

#include<stdio.h>
#include<conio.h>

// void main()
// {
//     int a ;

//     // int clrscr();

//     a = 50;

//     // printf("a"); // It will print exactly a not value of a i.e:-50

//     printf("%d"); // %d:-Format Specifier:- special character for printing integer data types


// }

// Why??:-

// void main()
// {
//     int a= 30, b = 90, c = 75;
//     // clrscr();

//     printf("%d");   // It Will Print 75 as c uses a stack while allocating memory in LIFO Order; 
//     // getch();
// }

// void main()
// {
//     int a = 50, b = 30, c;
//     c = a + b;
//     // printf("Addition is %d", c);
//     printf("Addition of %d and %d is %d",a,b,c);
// }

// Memory Allocation:-

    /*
        bit :- 0, 0, 11, 01, 0 :- Binary Formats i.e:- flips and flops
        8 bit :- 1 byte
        1024 byte:- 1kb
        1024 kb:- 1MB
        1024 MB:- 1GB
        1024 GB:- 1TB
        1024 TB:- 1PB
        1024 PB: 1 ZB
        */

// void main()
// {
//     int a;  // 2 byte Or 4 byte i.e. Unix:- 4bytes , Widnows :- 4bytes, 2 bytes

//     a = 13; // Standard:- 2byte      i.e:-         16bits
//                         // a = 13; :- [0|0|0|0|0|0|0|0|0|0|0|0|1|1|0|1]
//                         // 2 bytes can Store 2^16 :- 65536 / 2 because -ve and +ve integers
//                                                     // = 0 to 32767 :- +ve Integers
//                                                     // =-1 to  -32768 :- -ve Integers

//                         // 4 bytes can store 2*32 :-

    
// }

void main()
{
    int a;
    a = 32765;
    a = a + 5;
    printf("%d",a);

    /*
        int declaration:-        *****Imagine the range in a circle******
            signed int a;  +ve,-ve
            unsigned int a;  only +ve
            int a; signed

            unsigned int a Circle range:- 2^16 :- 0 to 65535;
                    a = 32765;
                    a = a+5;
                    printf("%d",a);
                    32770
    */
}