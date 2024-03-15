// Program For Matrix Multiplication
#include<stdio.h>
#include<conio.h>
int main()
    {
        int a1[50][50], b1[50][50], c1[50][50], m, n, r, c, k;
        //input of rows and cols
        printf("\nEnter value of Rows and Columns:");
        scanf("%d%d", &m, &n);
        // Input of 1st matrix
        printf("\nEnter Elements in the first matrix:");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        scanf("%d",&a1[r][c]);
                    }
            }
        //input for 2nd matrix
        printf("\nEnter Elements in the Second Matrix:");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        scanf("%d", &b1[r][c]);
                    }
            }
        // print first matrix
        printf("\nFirst Matrix is:\n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",a1[r][c]);
                    }
                printf("\n");
            }
        // print second matrix
        printf("\nSecond Matrix is: \n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",b1[r][c]);
                    }
                printf("\n");
            }
        // result matrix will be 0 first
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        c1[r][c] = 0;
                    }
            }
        // Matrix Multiplication
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        for(k = 0; k < m; k++)
                            {
                                c1[r][c] = c1[r][c] + (a1[r][k] * b1[k][c]);
                            }
                    }
            }
        // Print Resultant Matrix
        printf("\nMultiplied Matrix is: \n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",c1[r][c]);
                    }
                printf("\n");
            }
        return 0;
    }