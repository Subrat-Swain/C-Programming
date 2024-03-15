// Write a Program to find the simple interest for given principal, rate of interest and number of years;

#include<stdio.h>

    int main ()
        {
            int principal, rate, time,Si;

            printf("Enter Principal:");
            scanf("%d",&principal);

            printf("\nEnter Rate Of Interest:");
            scanf("%d",&rate);

            printf("\nEnter number of years:");
            scanf("%d",&time);

            Si = ( principal * time * rate ) / 100;
            printf("Simple Interest is:%d",Si);
            return 0;
        }