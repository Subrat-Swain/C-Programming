// Write a Program to input five real numbers and find out average and sum.

#include <stdio.h>

    int main()
        {
            float a, b, c, d, e, sum, avg;

            printf("Enter Five Real Numbers:");

            scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

            sum = a + b + c + d + e;

            avg = sum / 5;

            printf("\nSum & avg of five real numbers are %.2f & %.2f", sum, avg);

        return 0;
        }