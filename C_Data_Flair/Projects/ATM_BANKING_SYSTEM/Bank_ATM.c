/*-----------------------------ATM BANKING SYSTEM-----------------------*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define clrscr() system("cls")
struct ATM
    {
        int acno;
        char name[50];
        int amount;
    };struct ATM A1;
void design();
void createacc();
void deposit();
void withdraw();
void balance();
int main()
    {
        int choice;
        int count = 0;
        clrscr();
        char ch1, ch2, ch3, ch4;
    pin:printf("\nEnter Your pin:");
        ch1 = getch();
        printf("*");
        ch2 = getch();
        printf("*");
        ch3 = getch();
        printf("*");
        ch4 = getch();
        printf("*");
        if(ch1 == 'd' && ch2 == 'a' && ch3 == 't' && ch4 == 'a')
            {

                do
                    {
                        design();
                        printf("\nEnter Your Choice:");
                        scanf("%d", &choice);
                        switch(choice)
                            {
                                case 1: createacc();break;
                                case 2: deposit();break;
                                case 3: withdraw();break;
                                case 4: balance();break;
                                case 5: break;
                                default: printf("invalid choice!!! Enter Again!!!");
                            }
                    } while (choice != 5);
            }
            else
                {
                    count++;
                    printf("\nInvalid Pin!!!Enter Again");
                    if(count == 3)
                        {
                            printf("\n!!!Too Many Attempts...Try Again After 24hrs.");
                            exit(0);
                        }
                    goto pin;
                }
        
        
        return 0;
    }
// Menu
void design()
    {
        printf("\n-----------------ATM BANKING SYSTEM-------------------");
        printf("\n\t\t1.Create Account");
        printf("\n\t\t2.Deposit Amount");
        printf("\n\t\t3.Withdrawal Amount");
        printf("\n\t\t4.Check Balance");
        printf("\n\t\t5.Exit");
        printf("\n-------------------------------------------------");
    }
// account creation
void createacc()
    {
        printf("\nEnter Account Number:");
        scanf("%d", &A1.acno);
        printf("\nEnter Account Holder Name:");
        fflush(0);
        scanf("%s", &A1.name);
        printf("\nEnter Account Opening Amount:");
        scanf("%d", &A1.amount);
    }
// Deposit into Account
void deposit()
    {
        int amt;
        printf("\nEnter Amount For Deposit");
        scanf("%d", &amt);
        if(amt <= 0)
            {
                printf("\nInvalid Amount......");
            }
        A1.amount = A1.amount + amt;
    }
// Withdraw From Account
void withdraw()
    {
        int amt;
        printf("\nEnter Amount For Withdraw");
        scanf("%d", &amt);
        if(amt <= 0)
            {
                printf("\nInvalid Amount..........");
            }
        if(amt > A1.amount)
            {
                printf("\nInsufficient Fund......");
            }
        else
            {
                A1.amount = A1.amount - amt;
            }
    }
// Check Balance or everything
void balance()
    {
        printf("\nAccount No:%d", A1.acno);
        printf("\nName: %s",A1.name);
        printf("\nAmount: %d", A1.amount);
    }