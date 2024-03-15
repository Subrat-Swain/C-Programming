// Program for Local and global variable
#include<stdio.h>
#include<conio.h>
void xyz();
void abc();
int a = 30; // Global Variable
int main()
    {
        int a = 100;
        a = a + 10;
        xyz();
        printf("\nLocal Main: %d",a);
        return 0;
    }
void xyz()
    {
        a = a + 10;
        abc();      // LIFO :- Last in First out;
        printf("\nGlobal Value: %d",a);
        a = a + 30;
    }
void abc()
    {
        int a = 80;
        a = a + 20;
        printf("\nLocal abc Value: %d",a);
        a = a - 10;
    }