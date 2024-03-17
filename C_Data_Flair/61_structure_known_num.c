// Program for structure in c
#include<stdio.h>
#include<conio.h>
struct Student
    {
        int rNo;
        char name[50];
        double per;
    };struct Student S;
void main()
    {
        printf("\nEnter Roll No:");
        scanf("%d", &S.rNo);
        fflush(0);  // flush the memory
        printf("\nEnter Name :");
        scanf("%s", S.name);
        fflush(0);
        printf("\nEnter Percentage:");
        scanf("%lf", &S.per);
        printf("\n-----------------");
        printf("\nRoll No: %d", S.rNo);
        printf("\nName is: %s", S.name);
        printf("\nPercentage is: %.2lf", S.per);
    }