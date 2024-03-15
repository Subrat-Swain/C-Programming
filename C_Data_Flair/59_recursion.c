#include<stdio.h>
#include<conio.h>
void main()
    {
        // static int i = 1;
        // if(i > 10)
        //     {
        //         exit(0);
        //     }
        // printf("%d ",i);
        // i++;
        // main();


        // for n number

        int n, x;
        printf("\nEnter a Limit:");
        scanf("%d", &n);
        display(n);
        x = factorial(n);
        printf("\n Factorial of %d is %d", n, x);
    }
// Recursive Function
void display(int n)
    {
        static int i = 1;
        if(i > n)
            return;
        printf("%d ",i);
        i++;
        display(n);

    }
int factorial(int n)
    {
        static int f = 1;
        if(n == 0)
            {
                return f;
            }
        f = f *n;
        n--;
        factorial(n);
    }