// Write a Program to solve quadratic equation
    /*
        Quadratic Equation :- ax2 + bx + c = 0;

        root1 = -b + sqrt(b * b - 4 * a * c) / 2 * a

        root2 = -b - sqrt(b * b - 4 * a * c) / 2 * a
    */
#include<stdio.h>
#include<math.h>

    int main()
        {
            float a , b , c;
            double root1, root2;

            printf("Enter Cooficient of quadratic equation:");
            scanf("%f%f%f", &a, &b, &c);

            root1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;

            root2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

            printf("Roots are %.2lf & %.2lf", root1, root2);
        
        return 0;
        }