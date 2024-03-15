#include<stdio.h>
#include<conio.h>
#include"C:\Users\SITU\OneDrive\Desktop\C-Programming\C_Data_Flair\includes\subrat.h"
void main()
    {
        int x;
        x = reverse(123);
        printf("\nReverse is %d",x);
        x = factorial(5);
        printf("\nFactorial is %d",x);
    
        if(maxvalue(60,30))
            printf("\nGreater is First");
        else 
            printf("\nGreater is Second");

    }