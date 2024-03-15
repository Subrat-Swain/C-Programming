// Program for searching an element in an array using binary search

#include<stdio.h>
#include<conio.h>
int main()
    {
        int ar[500], n, i, j, temp, s, start, end, mid, f=0;
    xyz:printf("\nEnter The Limit:");
        scanf("%d",&n);
        if(n > 500)
            {
                printf("\n!!Please Enter Limit 0-500 !! Enter Again !!");
                goto xyz;
            }
        printf("\nEnter the Elements Of Array:");
        for(i = 0; i < n; i++)
            {
                scanf("%d",&ar[i]);
            }
        // Sorting Array ascending;
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
        printf("\nSorted Array is:");
        for(i = 0; i< n; i++)
            {
                printf("%d ",ar[i]);
            }
        printf("\nEnter Element to search:");
        scanf("%d", &s);
        // Binary Search
        start = 0;
        end = n-1;
        while(start <= end)
            {
                mid = (start + end) / 2;
                if(s == ar[mid])
                    {
                        f = 1;
                        break;
                    }
                else if(s > ar[mid])
                    {
                        start = mid + 1;
                    }
                else
                    {
                        end = mid - 1;
                    }
            }
        if(f == 1)
            printf("\nSearching Success.....");
        else
            printf("\nSearching Not Success!!!!");

        return 0;
    }