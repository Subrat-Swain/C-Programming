// Program to check whether a string is a palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        char str[100];
        int i, j, f=0;
        printf("\nEnter A String:");
        gets(str);
        // char str1[100];
        // int x;
        // strcpy(str1, str);     // Using In-build function
        // puts(strrev(str1));
        // x = strcmp(str, str1);
        // if(x==0)
        //     printf("\nString is Palindrome");
        // else
        //     printf("\nString is Not Palindrome");


        // Without Using In-build Function
        i = 0;
        j = strlen(str)- 1;
        while(i <= j)
            {
                if(str[i] != str[j])
                {
                    f= 1;
                    break;
                }
                i++;
                j--;
            }
        if(f == 0)
            printf("\nString is Palindrome");
        else
            printf("\nString is Not Palindrome");
        return 0;
    }