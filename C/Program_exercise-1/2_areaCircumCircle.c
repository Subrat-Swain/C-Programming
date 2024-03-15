// Write a Program to input radius of a circle find out its area and circumference.

#include<stdio.h>

    int main ()
        {
            float radius;
            double area;
            double circumference;
            const float pi = 3.141;

            printf("Enter Radius of the circle:");
            scanf("%f",&radius);

            area = pi * radius * radius;

            circumference = 2 * pi * radius;

            printf("Area and Circumference of the Circle is %lf & %lf",area,circumference);

        return 0;
        }