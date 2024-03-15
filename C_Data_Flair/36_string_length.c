//Count length of String in C
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        char str[100];
        int i=0;
        printf("\nEnter a String:");
        gets(str);
        while(str[i] != '\0')   // Without Using In-build function;
            {
                i++;
            }
        // i = strlen(str); // With Using In-build function;
        printf("Length Of String is %d",i);
        return 0;
    }