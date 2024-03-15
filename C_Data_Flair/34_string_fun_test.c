// Programs for test string functions
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        char str[100], str1[100],str2[100];
        int x;
        printf("\nEnter First string:");
        gets(str);
        printf("\nEnter Second String:");
        gets(str1);

        puts(str);
        puts(str1);

        strcpy(str2, str);
        strcat(str2, str1);
        printf("After concate %s",str2);


        return 0;
    }
/*
    x = strlen(str);
    printf("\nLength of string is %d",x);

    strcpy(str1, str);
    printf("\nReverse is %s",strrev(str1));//actual string will change
    printf("\nOld string is %s",str);

    x = strcmp(str, str1);
        // printf("%d",x);
        if(x == 0)
            {
                printf("\nStrings are same");
            }
        else
            {
                printf("\nStrings are Not Same");
            }

*/