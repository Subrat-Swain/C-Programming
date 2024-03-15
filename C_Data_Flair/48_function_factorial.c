// Program to Write Custome Functions and factorial of a number;
#include<stdio.h>
#include<conio.h>
void display(); // Function declaration / prototype
void fact();
void main()
    {
        printf("\nMain Start.....");
        display();// function Call
        fact();
        printf("\nMain End.....");
    }
void fact()
    {
        int f = 1, n;
        printf("\nEnter a Number:");
        scanf("%d",&n);
        while(n!=0)
            {
                f = f * n;
                n --;
            }
        printf("\nFactorial is: %d",f);
    }
void display()  // Function Definition
    {
        printf("\nThis is a Test Function in C");
    }