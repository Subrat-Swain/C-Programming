// Program for Binary To Hexadecimal

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
            rem = dec % 16;
            ar[i] = rem;
            dec = dec / 16;
            i++;
        }
        i--;
        printf("\n Hexa Decimal No is:");
        while(i>=0)
        {
            switch(ar[i])
            {
                case 10: printf("A");break;
                case 11: printf("B");break;
                case 12: printf("C");break;
                case 13: printf("D");break;
                case 14: printf("E");break;
                case 15: printf("F");break;
                default: printf("%d",ar[i]);
            }
            i--;
        }
        return 0;
    }