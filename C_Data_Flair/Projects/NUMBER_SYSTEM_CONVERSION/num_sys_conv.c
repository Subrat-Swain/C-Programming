#include<stdio.h>
#include<conio.h>
void design();
void dtobin();
void dtooct();
void dtohexa();
void bintodec();
void bintooct();
void bintohexa();
int n, ar[50], r;
int main()
    {
        design();
        return 0;
    }
// Menu
void design()
    {
        int choice;
        do
        {
            printf("\n-------------------Number System Conversions--------------");
            printf("\n\t\t1. Decimal to Binary");
            printf("\n\t\t2. Decimal to Octal");
            printf("\n\t\t3. Decimal to Hexadecimal");
            printf("\n\t\t4. Binary to Decimal");
            printf("\n\t\t5. Binary to Octal");
            printf("\n\t\t6. Binary to Hexadecimal");
            printf("\n\t\t7. Exit");
            printf("\n----------------------------------------------------------");
            printf("\nEnter Your Choice:");
            scanf("%d", &choice);
            switch(choice)
                {
                    case 1: dtobin();break;
                    case 2: dtooct(); break;
                    case 3: dtohexa(); break;
                    case 4: bintodec(); break;
                    case 5: bintooct(); break;
                    case 6: bintohexa(); break;
                    case 7: break;
                    default: printf("\nInvalid Choice....");
                }
        } while (choice != 7);
    }
void dtobin()
    {
        int i = 0;
        printf("\nEnter a decimal no:");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 2;
                ar[i] = r;
                i++;
                n = n / 2;
            }
        i--;
        printf("\n Binary No is:");
        while(i>=0)
            {
                printf("%d", ar[i]);
                i--;
            }
    }
void dtooct()
    {
        int i = 0;
        printf("\nEnter a decimal no:");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 8;
                ar[i] = r;
                i++;
                n = n / 8;
            }
        i--;
        printf("\n Octal No is:");
        while(i>=0)
            {
                printf("%d", ar[i]);
                i--;
            }
    }
void dtohexa()
    {
        int i = 0;
        printf("\nEnter a decimal no:");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 16;
                ar[i] = r;
                i++;
                n = n / 16;
            }
        i--;
        printf("\nHexadecimal No is:");
        while(i>=0)
            {
                switch(ar[i])
                    {
                        case 10: printf("A");break;
                        case 11: printf("B"); break;
                        case 12: printf("C"); break;
                        case 13: printf("D"); break;
                        case 14: printf("E"); break;
                        case 15: printf("F"); break;
                        default: printf("%d", ar[i]);
                    }
                i--;
            }
    }
// Conversion of binary to decimal
void bintodec()
    {
        int n, r, dn = 0, base = 1;
        printf("\nEnter a Binary Number(0-1):");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 10;
                dn = dn + (r * base);
                base = base * 2;
                n = n /10;
            }
        printf("\nDecimal No is: %d", dn);
    }
// Conversion of Binary to Octal
void bintooct()
    {
        int n, r, dn = 0, base = 1, ar[50], i = 0;
        printf("\nEnter a Binary Number(0-1):");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 10;
                dn = dn + (r * base);
                base = base * 8;
                n = n /10;
            }
        while(dn != 0)
            {
                r = dn % 8;
                ar[i] = r;
                i++;
                dn = dn / 8;
            }
        i--;
        printf("\nOctal No is: ");
        while(i >= 0)
            {
                printf("%d", ar[i]);
                i--;
            }
    }
// Conversion of binary to hexadecimal
void bintohexa()
    {
        int n, r, dn = 0, base = 1 , ar[50] , i = 0;
        printf("\nEnter a Binary Number(0-1):");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 10;
                dn = dn + (r * base);
                base = base * 2;
                n = n /10;
            }
        while(dn != 0)
            {
                r = n % 16;
                ar[i] = r;
                i++;
                n = n / 16;
            }
        i--;
        printf("\nHexadecimal No is:");
        while(i>=0)
            {
                switch(ar[i])
                    {
                        case 10: printf("A");break;
                        case 11: printf("B"); break;
                        case 12: printf("C"); break;
                        case 13: printf("D"); break;
                        case 14: printf("E"); break;
                        case 15: printf("F"); break;
                        default: printf("%d", ar[i]);
                    }
                i--;
            }
    }