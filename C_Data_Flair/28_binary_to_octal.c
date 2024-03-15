// Program for Binary To Octal
#include<stdio.h>
#include<conio.h>
#define clrscr() system("cls")

int main()
    {
        int n, dec=0, rem, b=1,binary,i = 0, ar[50];
        clrscr();
        printf("Enter a Binary Number(only 0 & 1 format):");
        scanf("%d",&n);
        binary = n;
        while(n!=0)
        {
            rem = n % 10;
            dec = dec + rem * b;
            b = b *2;
            n = n/10;
        }
        printf("\n Binary Number is: %d",binary);
        printf("\n Decimal Number is: %d",dec);
        while(dec != 0)
        {
            rem = dec % 8;
            ar[i] = rem;
            dec = dec / 8;
            i++;
        }
        i--;
        printf("\n Octal No is:");
        while(i>=0)
        {
            printf("%d",ar[i]);
            i--;
        }
        return 0;
    }