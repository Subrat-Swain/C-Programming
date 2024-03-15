// Program for 4 different types of storage class i.e:- auto, register, static, extern
#include<stdio.h>
#include<conio.h>
// auto int a;
int a;
void abc();
void main()
    {
        // auto int a;
        // printf("%d",a);

        // register float a;
        // printf("Enter a number");
        // scanf("%d",&a);


        // static int a;
        // printf("%d",a);

        // abc();
        // abc();
        // abc();

        printf("%d",a);
        abc();

        // extern int n;

    }
void abc()
    {
        // static int a = 1;
        // printf("\n%d",a);
        // a++;

        a++;
        printf("\n%d",a);
    }