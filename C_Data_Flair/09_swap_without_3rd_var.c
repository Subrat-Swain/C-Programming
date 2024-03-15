/* Swapping Without Using Third Variable */

#include<stdio.h>
// void main()
// {
//     // : - single line comment;
//     /* MultiLine Comment */
//     int a , b;
//     printf("Enter Two No:");
//     scanf("%d %d", &a, &b);
//     printf("\nBefore Swapping %d %d",a,b);

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("\nAfter Swapping %d %d",a,b);
// }




/* Write a Program to enter marks of 4 subject of a student find out total and percentage */
// Integers
void main()
    {
        int phy, math, chem, cs, total, percentage;
        printf("Enter physics marks:");
        scanf("%d",&phy);
        printf("\nEnter math marks:");
        scanf("%d",&math);
        printf("\nEnter chem marks:");
        scanf("%d",&chem);
        printf("\nEnter cs marks:");
        scanf("%d",&cs);

        total = phy + math + chem + cs ;

        percentage = (total / 400) * 100;

        printf("\nTotal %d marks with %d percentage",total, percentage);
    }