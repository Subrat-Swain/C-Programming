// Program to sort an array in c (Linear Sort)

#include<stdio.h>
#include<conio.h>
int main()
    {
        int ar[500], n, i, j, temp;
    xyz:printf("\nEnter The Limit:");
        scanf("%d",&n);
        if(n > 500)
            {
                printf("\nPlease Enter The limit 0-500 !!! Enter Again !!!");
                goto xyz;
            }
        printf("\nEnter The Elements of Array:");
        for(i = 0; i<n; i++)
            {
                scanf("%d",&ar[i]);
            }
        // Nested loop for checking 1st element with a complete array if min then swap then increment the 1st position;
        for(i = 0; i < n; i++)
            {
                for(j = i+1; j < n; j++)
                    {
                        if(ar[j] < ar[i])
                            {
                                temp = ar[i];
                                ar[i] = ar[j];
                                ar[j] = temp;
                            }
                    }
            }
        printf("\nSorted Elements are:");
        for(i = 0; i<n; i++)
            {
                printf("%d ",ar[i]);
            }
        return 0;
    }