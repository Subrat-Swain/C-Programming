// Program For Swapping Two Number function declared in header file C:\Users\SITU\OneDrive\Desktop\C-Programming\C_Data_Flair\includes\subrat.h
#include<stdio.h>
#include<conio.h>
#include"C:\Users\SITU\OneDrive\Desktop\C-Programming\C_Data_Flair\includes\subrat.h"
void main()
    {
        int a, b;
        printf("Enter Two Number:");
        scanf("%d%d", &a, &b);
        printf("\n Before Swapping: %d %d",a,b);
        swap(&a,&b);
        printf("\nAfter Swapping: %d %d",a,b);
    }
