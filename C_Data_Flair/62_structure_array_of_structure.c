// Program For Array Of Structure in C
#include<stdio.h>
#include<conio.h>
struct Student
    {
        int rNo;
        char name[50];
        double per;
    };struct Student S[5];
void main()
    {
        int i;
        for(i = 0; i < 5; i++)
            {
                printf("\nEnter Roll No:");
                scanf("%d", &S[i].rNo);
                printf("\nEnter Name:");
                fflush(0);
                scanf("%s",S[i].name);
                printf("\nEnter Percentage:");
                scanf("%lf", &S[i].per);
            }
        printf("\n-----------\tStudent Information\t----------\n");
        printf("\n\tRoll\t\tName\t\tpercentage\t \n");
        for(i = 0; i < 5; i++)
            {
                printf("\t%d\t",S[i].rNo);
                printf("\t%s\t", S[i].name);
                printf("\t%.2lf\t", S[i].per);
                printf("\n");
            }
    }