#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
    {
        static int i = 0;
        char ch1, ch2, ch3, ch4;
    pin:printf("\nEnter a Pin:");
        ch1 = getch();
        printf("*");
        ch2 = getch();
        printf("*");
        ch3 = getch();
        printf("*");
        ch4 = getch();
        printf("*");
        if(ch1 == '1' && ch2 == '2' && ch3 =='3' && ch4 == '4')
            {
                printf("\nYou are valid user");
            }
        else
            {
                if(i == 2)
                    {
                        printf("\nToo Many Attempt Contact to admin try again later");
                        exit(0);
                    }
                else
                    {
                        i++;
                        printf("\n!!!!Incorrect pin....Enter Again");
                        goto pin;
                    }
            }
        printf("\n%c\t%c\t%c\t%c", ch1, ch2, ch3, ch4);
        return 0;
    }