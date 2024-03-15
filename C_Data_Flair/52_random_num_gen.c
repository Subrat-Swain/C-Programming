// Program to Generate Random Number in c using srand() & rand()
#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
    {
        int n,i, l, u;
        system("cls");
        srand(time(NULL));
        printf("\nEnter Starting Value Of Random Number");
        scanf("%d",&l);
        printf("\nEnter Ending Valu Of Random Number:");
        scanf("%d",&u);
    
        // for(i = 1; i <= 10; i++)
        //     {
        //         n = rand() % 10;
        //         printf("%d\n",n);
        //     }
        for(i = 1; i <= 5; i ++)
            {
                n = (rand() %(u-l+1)) + l;
                printf("%5d",n);
            }
       
        return 0;
    }