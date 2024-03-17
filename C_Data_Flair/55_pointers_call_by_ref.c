// Call By Reference using pointers
#include<stdio.h>
#include<conio.h>
#include"C:\Users\SITU\OneDrive\Desktop\C-Programming\C_Data_Flair\includes\subrat.h"
void main()
    {
        //-----------------Call By Value-----------------
//         int a = 100;    // local of main
//         display(a);
//         printf("%d",a);
//     }
// void display(int a)
//     {
//         a = a + 10; // local of display

        //-------------------Call By Reference------------
        int a = 100 ;
        display(&a);
        printf("%d",a);
    }