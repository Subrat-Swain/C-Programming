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
    };struct ATM A1[3];
void design();
void createacc();
void deposit();
void withdraw();
void balance();
void displayAccount();
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
                                case 5: displayAccount();
                                case 6: break;
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
        printf("\n\t\t5.Display Account details");
        printf("\n\t\t6.Exit");
        printf("\n-------------------------------------------------");
    }
// account creation
void createacc()
    {
        int i;
        for(i = 0; i < 3; i++)
            {
                printf("\nEnter Account Number:");
                scanf("%d", &A1[i].acno);
                printf("\nEnter Account Holder Name:");
                fflush(0);
                scanf("%s", &A1[i].name);
                printf("\nEnter Account Opening Amount:");
                scanf("%d", &A1[i].amount);
            }
    }
// display account details
void displayAccount()
    {
        int i;
        printf("\nAccount No\t\t Name\t\t Balance");
        for(i = 0; i < 3; i++)
            {
                printf("\n%d",A1[i].acno);
                printf("\t%s", A1[i].name);
                printf("\t%d", A1[i].amount);
                printf("\n\n");
            }
    }
// Deposit into Account
void deposit()
    {
        int accno, i, amt, f = 0;
        printf("\nEnter an Account Number");
        scanf("%d",&accno);
        for(i = 0; i < 3; i++)
            {
                if(A1[i].acno == accno)
                    {
                        f = 1;
                        printf("\nName: %s", A1[i].name);
                        printf("\nEnter an Amount For Deposit");
                        scanf("%d", &amt);
                        if(amt <= 0)
                            {
                                printf("\nInvalid Amount......");
                            }
                        A1[i].amount = A1[i].amount + amt;
                        break;
                    }
            }
        if(f == 0)
            {
                printf("\nInvalid Account No ... Please check");
            }
    }
// Withdraw From Account
void withdraw()
    {
        int accno, i, amt, f = 0;
        printf("\nEnter an Account Number");
        scanf("%d",&accno);
        for(i = 0; i < 3; i++)
            {
                if(A1[i].acno == accno)
                    {
                        f = 1;
                        printf("\nName: %s", A1[i].name);
                        printf("\nEnter an Amount For Withdraw");
                        scanf("%d", &amt);
                        if(amt <= 0 || amt > A1[i].amount)
                            {
                                printf("\nInvalid Amount or Insufficient Balance...");
                            }
                        if(amt > A1[i].amount)
                            {
                                printf("\nInsufficient Fund....");
                            }
                        A1[i].amount = A1[i].amount - amt;
                        break;
                    }
            }
        if(f == 0)
            {
                printf("\nInvalid Account No ... Please check");
            }
    }
// Check Balance or everything
void balance()
    {
        int accno, i, amt, f = 0;
        printf("\nEnter an Account Number:");
        scanf("%d",&accno);
        for(i = 0; i < 3; i++)
            {
                if(A1[i].acno == accno)
                    {
                        printf("\nAccount No: %d", A1[i].acno);
                        printf("\nName: %s", A1[i].name);
                        printf("\nBalance: %d", A1[i].amount);
                    }
            }
    }