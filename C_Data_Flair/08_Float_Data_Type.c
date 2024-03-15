#include<stdio.h>
#include<conio.h.>

// void main(){
    // int a;
    // a = 20.13;  // Automatically converted into int :- Implicit Type Covnversion;
    // /*
    //     Explicit Type Casting:- Forcefully Conversion of One Data type To another type;
    // */
    // printf("%d",a);

    // float a = 20.13;
    // printf("%f", a); // %f is used for printing float values which takes 4 bytes;

    // float a, b, c;
    // printf("Enter Two Decimal No:");
    // scanf("%f %f", &a, &b);
    // c = a + b;
    // printf("Additioin of %f and %f is %f", a, b, c);

// }


    // void main(){
    //     float a;
    //     a = 15 / 2; // int / int = int
    //     printf("%f", a);
    // }

    /* 
        int = int / int;
        float = int / float
        float = float / int
        float = float / float
    */


    // void main(){
    //     float n;
    //     n = 20;
    //     printf("%f",n);
    // }

// Assignment:-
    /*
        Write a Program to enter radius of a circle and calculate it's area and circumference
    */

   void main(){
    float radius, circumference, area;

    printf("Enter Radius Of The Circle:");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;

    area = 3.14 * radius * radius;

    printf("\nArea Of Circle is %f and Circumference is %f", area, circumference);

   }