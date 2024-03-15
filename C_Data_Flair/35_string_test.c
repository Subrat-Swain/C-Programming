// String Related Programming in C
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        char str[100];
        int i = 0;
        printf("\nEnter the String:");
        // scanf("%s",str);
        gets(str);
        while(str[i] != '\0')
            {
                printf("%c",str[i]);
                i++;
            }
        // printf("%s",str);
        return 0;
    }