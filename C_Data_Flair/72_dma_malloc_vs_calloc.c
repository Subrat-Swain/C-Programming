//Difference between malloc and calloc function for dynamic memory allocation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
    {
        int n, i , *ar;
        printf("\nEnter The Limit:");
        scanf("%d",&n);
        ar = (int *)(malloc(sizeof(int) * n));  //  Takes single parameter may be allocate contiguous but single block;
        // ar = (int *)(calloc(sizeof(int), n));    // Contiguous Memory block take 2 parameter size and count
        printf("\nEnter elements in array");
        for(i = 0; i < n; i++)
            scanf("%d",&ar[i]);
        printf("\nElements are:");
        for(i = 0; i < n; i++)
            {
                printf("%d\t",ar[i]);
                printf("%u\t",&ar[i]);
            }
        free(ar);
            
    }
