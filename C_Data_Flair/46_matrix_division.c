// Program For Division Of Two Matrix
#include<stdio.h>
#include<conio.h>
int main()
    {
        int a[50][50], b[50][50], result[50][50], m, n, r, c;
        printf("\nEnter row and columns of Matrix:");
        scanf("%d%d",&m, &n);
        // input first matrix
        printf("\nEnter Elements Of First Matrix:");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        scanf("%d",&a[r][c]);
                    }
            }
        // input second matrix;
        printf("\nEnter Elements Of Second Matrix:");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        scanf("%d",&b[r][c]);
                    }
            }
        // print first matrix
        printf("\nFirst Matrix is: \n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",a[r][c]);
                    }
                printf("\n");
            }
        // print second matrix
        printf("\nSecond Matrix is: \n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",b[r][c]);
                    }
                printf("\n");
            }
        // Division of two matrix
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        result[r][c] = a[r][c] / b[r][c];
                    }
            }
        // Print Result Matrix
        printf("\nResult Matrix after addition:\n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",result[r][c]);
                    }
                printf("\n");
            }
        return 0;
    }