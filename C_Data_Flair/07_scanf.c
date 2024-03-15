/*
    scanf(): is a function in c which helps us to take input from user
*/

#include<stdio.h>
#include<conio.h>

// void main()
// {
//     int a, b, c;
//     printf("Enter Two No:");
//     // scanf("%d", &a);  // & :-> Addressing Operator;
//     // scanf("%d", &b);   
//     scanf("%d%d",&a,&b); // Single Line
//     printf("%d,%d",a,b); 
// }


/* Write a Program to enter 2 number and print addition , subtracktion
multiplication and division*/

/*----------- Using A Third Variable --------------->*/

// void main()
// {
//     int a , b, c;
//     printf("Enter Two No:");
//     scanf("%d %d", &a, &b);
//     c = a + b;
//     printf("\nAddition Of %d and %d is %d", a, b, c);
//     c = a - b;
//     printf("\nSubtraction Of %d and %d is %d", a , b, c);
//     c = a * b;
//     printf("\nMultiplication Of %d and %d is %d", a, b, c);
//     c = a / b;
//     printf("\nDivision Of %d and %d is %d", a, b, c);
// }

/*-----------Without Using A Third Variable------------>*/

// void main()
// {
//     int a, b;
//     printf("Enter Two No:");
//     scanf("%d %d", &a, &b);
//     printf("\nAddition Of %d and %d is %d", a, b, a+b);
//     printf("\nSubtraction Of %d and %d is %d", a, b, a-b);
//     printf("\nMultiplication Of %d and %d is %d", a, b, a*b);
//     printf("\nDivision Of %d and %d is %d", a, b, a/b);
// }

/* Write a Program to Enter two number and print swapping of numbers */

/*-------------Using A Third Variable------------------------>*/

// void main(){
//     int a, b, temp;
//     printf("Enter Two Number:");
//     scanf("%d %d", &a,&b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("\nValue Of a is %d and value of b is %d", a, b);
// }

/*---------Without Using A Third Variable-------------------->*/

void main(){
    int a, b;
    printf("Enter Two No:");
    scanf("%d %d", &a, &b);
    a = ( a + b ) - a;
    b = ( a * b ) - b;
    printf("Value Of a is");
}