// Write a Program to input length and breadth of a rectangle; find out its area and circumference;

#include<stdio.h>

    int main ()
        {
            float length, breadth;
            double circumference, area;

            printf("Enter Length & Breadth Of a Rectangle:");
            scanf("%f%f",&length, &breadth);

            area = length * breadth;

            circumference = 0.5 * (length + breadth);

            printf("area & circumference of the rectangle is: %.2lf & %.2lf", area, circumference);

        return 0;
        }