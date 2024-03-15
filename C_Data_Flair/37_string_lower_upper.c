// Program For printf string from lowercase to uppercase in c
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        char str[100];
        int i = 0;
        printf("\nEnter a String:");
        gets(str);
        // while(str[i] != '\0')   // Without using in-build functions
        //     {
        //         if(str[i] !=' ')
        //             printf("%c",str[i]-32);
        //         else
        //             printf("%c",str[i]);
        //         i++;
        //     }

        // With Using in-build function
        puts(strupr(str));
        return 0;
    }