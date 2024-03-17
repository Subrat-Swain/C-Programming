// Program For printing n the element of fibbonacci series without using any loop
#include<stdio.h>
#include<conio.h>
void fibbo(int);
void main()
    {
        int n;
        printf("\nEnter The Limit:");
        scanf("%d", &n);
        fibbo(n);
    }
    //Recursive function
void fibbo(int n)
    {
        static a = -1, b = 1, c;
        if(n == 0)
            return;
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        fibbo(n-1);
    }