// Program for Call By Value return by value arguments, parameters
#include<stdio.h>
#include<conio.h>
int factorial(int);
int reverse(int);
float area(float);
void main()
    {
        int x, y;
        float a;
        printf("\nEnter A Number:");
        scanf("%d",&x);
        y = factorial(x);
        printf("\nFactorial of %d is : %d", x, y);
        y = reverse(x);
        printf("\nReverse Of %d is : %d",x, y);
        printf("\nEnter Radius Of Circle:");
        scanf("%f",&a);
        printf("\nArea Of The Circle of radius %.2f is: %.2f",a,area(a));
    }
// Devlopper Task;
// Write Once Read Anywhere
int factorial (int n)
    {
        int f = 1;
        while(n != 0)
            {
                f = f * n;
                n --;
            }
        return (f);
    }
int reverse(int n)
    {
        int r, rev = 0;
        while(n != 0)
            {
                r = n % 10;
                rev = rev * 10 + r;
                n = n / 10;
            }
        return rev;
    }
float area(float r)
    {
        float A;
        A = 3.14 * r * r;
        return(A);
    }