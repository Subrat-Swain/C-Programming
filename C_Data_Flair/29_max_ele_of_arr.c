// Program to find largest (max) element of an array in c

#include<stdio.h>
#include<conio.h>
int main()
    {
        int ar[500], n, i, max, p;
    xyz:printf("\nEnter how many numbers you want to calculate max:");
        scanf("%d",&n);
        if(n > 500)
            {
                printf("\nEnter in between 0-500 !! Enter Again:");
                goto xyz;
            }
        printf("\nEnter Numbers:");
        for(i = 0; i < n; i++)
            {
                scanf("%d",&ar[i]);
            }
        max = ar[0];
        p = 0;
        for(i = 1; i < n; i++)
            {
                if(ar[i] > max)
                    {
                        max = ar[i];
                        p = i;
                    }
            }
        printf("\nMax Of Elements is %d entered in %d no.", max, p+1);
        return 0;
    }