//Program for Preprocessor Directives & Macro Statements
#include<stdio.h>
#include<conio.h>
#define PF printf
#define SF scanf
// #define add(a,b) a+b     // macro and function both can't be same
#define CUBE(n) n*n*n;
int add(int , int);
void main()
    {
        // int n;
        // PF("\nEnter A NUmber");
        // SF("%d",&n);
        // // #undef pf
        // if(n >= 0)
        //     PF("\nNo is +ve");
        // else
        //     SF("\nNo is -ve");

        // int c;
        // PF("\nEnter a No:");
        // SF("%d",&c);
        // c = CUBE(c);
        // PF("\nCube is: %d",c);

        int c;
        c = add(60,20);
        PF("%d",c);



    }
    int add(int a, int b)
        {
            int c;
            c = a + b;
            PF("\nData Falir");
            PF("\nIndore\n");
            return c;
        }