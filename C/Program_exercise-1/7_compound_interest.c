// Write a Program to find the compound interest for given principal, rate of interest and number of years.

#include<stdio.h>
#include<math.h>

    int main()
        {
            float principal, rate, time;
            double Ci;

            printf("Enter Principal:");
            scanf("%f", &principal);

            printf("Enter Rate Of Interest:");
            scanf("%f", &rate);
            
            printf("Enter number of year:");
            scanf("%f", &time);

            Ci = ( principal * (pow(1+(rate/100),time)))-principal;
            printf("Compound interest is:%.2lf",Ci);

        return 0;
        }