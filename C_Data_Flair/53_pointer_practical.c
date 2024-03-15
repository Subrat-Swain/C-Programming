// Program For Practical of Pointers
// %u :- print address format specifier
#include<stdio.h>
#include<conio.h>
int main()
    {
        int a = 10, *p, **r;
        printf("\nValue from variable: %d",a);
        printf("\nAddress is %u",&a);
        p = &a;
        // ++*p;
        // ++a;
        // printf("\nValue of variable is : %d and pointer is %d", a, *p);
        // r = &p;
        // ++**r;
        // printf("\nValue of a %d",a);
        // printf("\nValue of p %u",p);
        // printf("\nValue of *p %d", *p);
        // printf("\nValue of r %u", r);
        // printf("\nValue of *r %u", *r);
        // printf("\nValue of **r %d",**r);

        ++*p; // value inc.
        printf("\n\n %d \t %d ", a, *p);
        ++p; // Address inc.
        printf("\n\n %d \t %d ", a, *p); // garbage coz variable address never be in sequential


        return 0;
    }