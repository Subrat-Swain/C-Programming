// Menu driven application using switch case
#include<stdio.h>
#include<conio.h>

int main()
    {
        int a, b, c, choice;
        printf("\n--------------Menu----------------");
        printf("\n1.Addition\n2.Subtraction\n3.Swapping");
        printf("\n------------------------------------");
        printf("\nEnter Your Choice:");
        scanf("%d", &choice);
        switch(choice)
            {
                case 1:
                    {
                        printf("\nEnter Two Number:");
                        scanf("%d%d", &a, &b);
                        c = a + b;
                        printf("\nSum Of %d and %d is:%d",a,b,c);
                        break;
                    }
                case 2:
                    {
                        printf("\nEnter Two Number:");
                        scanf("%d%d", &a, &b);
                        c = a - b;
                        printf("\nSubtraction Of %d and %d is:%d",a,b,c);
                        break;
                    }
                case 3:
                    {
                        printf("Before Swapping %d %d",a,b);
                        scanf("%d%d", &a, &b);
                        a = a + b;
                        b = a - b;
                        a = a - b;
                        printf("After Swapping %d %d",a,b);
                        break;
                    }
                default: printf("\nInvalid Choice");
            }
        return 0;
    }