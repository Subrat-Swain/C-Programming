/*Write a Program to input length and breadth of a rectangle.
Calculate its area and then display the area */

#include<stdio.h>

int main()
    {
        int length, breadth, area;

        // printf() returns the number of characters (incl. white space character), it prints.
        printf("Enter length and breadth:");

        // scanf() returns number of input values it scanned.
        scanf("%d%d", &length , &breadth);

        //Area Calculation
        area = length * breadth;
        printf("Area of Rectangle : %d",area);
        return 0;
    }