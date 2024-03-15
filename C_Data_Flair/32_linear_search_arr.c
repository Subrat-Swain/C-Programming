// Program for search an element from an array using linear search
#include<stdio.h>
#include<conio.h>
int main()
    {
        int ar[500], n, i, s, f = 0;
    xyz:printf("\nEnter The Limit:");
        scanf("%d",&n);
        if(n > 500)
            {
                printf("\nPlease Enter Limit 0-500 !! Enter Again !!");
                goto xyz;
            }
        printf("\nEnter The Elements Of Array");
        for(i = 0; i < n; i++)
            {
                scanf("%d",&ar[i]);
            }
        printf("\nPlease Enter Element to Search:");
        scanf("%d",&s);
        for(i = 0; i < n; i++)
            {
                if(ar[i] == s)
                    {
                        f = 1;
                        break;
                    }
            }
        if(f == 1)
            {
                printf("\nElement is found");
            }
        else
            {
                printf("\nElement is Not found");
            }
        return 0;
    }