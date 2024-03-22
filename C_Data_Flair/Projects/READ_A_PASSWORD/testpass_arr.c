#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        static int i = 0;
        int p = 0;
        char ch, pass[50];
        printf("\nEnter a Password:");
        while(1)
            {
                ch = getch();
                if(ch == 13)
                    continue;
                if(ch == 9)
                    continue;
                printf("*");
                if(ch == '0')
                    break;
                pass[p] = ch;
                p++;
            }
        if(strcmp(pass, "subrat") == 0)
            {
                printf("\nYou are a Valid User:");
                printf("\n\n Password is : %s", pass);
            }
        else
            {
                printf("\nIncorrect Password....");
            }

    }