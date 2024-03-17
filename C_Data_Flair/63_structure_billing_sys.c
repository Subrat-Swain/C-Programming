// Program For Billing System Of a Resturant
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Product
    {
        int pid;
        char pname[50];
        int rate;
        int qty;
    };struct Product p[2];
void main()
    {
        int i, total = 0;
        for(i = 0; i < 10; i++)
            {
                fflush(0);
                printf("\nEnter Product Id:");
                scanf("%d", &p[i].pid);
                printf("\nEnter Product Name:");
                fflush(0);
                scanf("%s",&p[i].pname);
                printf("\nEnter Product Rate:");
                fflush(0);
                scanf("%d", &p[i].rate);
                printf("\nEnter Product Qty:");
                fflush(0);
                scanf("%d", &p[i].qty);
            }
        printf("\n------------------\tProduct Details\t--------------");
        printf("\nProduct Id\tProduct Name\tProduct Rate\tProduct Qty\tAmount\n");
        for(i = 0; i < 10; i++)
            {
                total = total + (p[i].qty * p[i].rate);
                printf("%d\t\t%s\t\t%d\t\t%d\t\t%d",p[i].pid, p[i].pname, p[i].rate, p[i].qty, (p[i].qty * p[i].rate));
                printf("\n");

            }
        printf("\n---------------------------------------------------");
        printf("\n\t\t\t\t\tTotal Amount:%d",total);
        printf("\n---------------------------------------------------");

    }