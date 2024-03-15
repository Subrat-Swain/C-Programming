// Write a program to input three side of triangle find out its area and circumference;

#include<stdio.h>
#include<math.h>// For Calculating Square root we have to use math.h header file ;

    int main ()
        {
            float a, b, c;

            double area, circumference, s;

            printf("Enter three sides of a triangle:-");

            scanf("%f%f%f",&a,&b,&c);

            circumference = a + b + c;

            s = (circumference * (circumference - a) * (circumference - b) * (circumference - c));

            area = sqrt(s);// for This operation we need math.h header file;

            printf("Area & Circumference of triangle is : %.2lf & %.2lf",area,circumference);

        return 0;
        }