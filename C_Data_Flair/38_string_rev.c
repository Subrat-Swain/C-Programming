// Reverse a String
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        char str[100];
        printf("\nEnter A String:");
        gets(str);
        // int i = strlen(str) - 1;
        // while(i >= 0)   // without Using in-build function
        //     {
        //         printf("%c",str[i]);
        //         i--;
        //     }

        // With using in-build function
        puts(strrev(str));
        
        return 0;
    }