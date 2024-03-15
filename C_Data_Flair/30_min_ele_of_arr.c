// Program to find smallest (min) element of an array in c

#include<stdio.h>
#include<conio.h>
int main()
    {
        int ar[500], n, i, min, p;
    xyz:printf("\nEnter how many numbers you want to calculate min:");
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
        min = ar[0];
        p = 0;
        for(i = 1; i < n; i++)
            {
                if(ar[i] < min)
                    {
                        min = ar[i];
                        p = i;
                    }
            }
        printf("\nMin Of Elements is %d entered in %d no.", min, p+1);
        return 0;
    }