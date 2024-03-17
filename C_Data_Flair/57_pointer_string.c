#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
    {
        // ---------------Program For count vowels in a string-----

    //     char s[100], *p;
    //     int count = 0;
    //     printf("Enter a String:");
    //     gets(s);
    //     p = &s;
    //     while( *p != '\0')
    //         {
    //             printf("\nAddress:%u",p);
    //            if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
    //                 count++;
    //             if( *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
    //                 count++;
    //             ++p;
    //         }
    //     printf("\n Total Vowel Is :%d", count);

    // ---------------------Reverse Of String------------

    char s[100], *p;
    int count = 0, i;
    printf("\nEnter a String:");
    gets(s);
    i = strlen(s);
    i--;
    p = &s[i];
    while(i >= 0)
        {
            printf("%c", *p);
            i--;
            p--;
        }

    }