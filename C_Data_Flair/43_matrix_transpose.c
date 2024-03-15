// Program for transpose of a matrix
#include<stdio.h>
#include<conio.h>
int main()
    {
        int a[50][50], m, n, r, c;
        printf("\nEnter row and columns of matrix:");
        scanf("%d%d", &m, &n);
        printf("\nEnter The Elements:");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        scanf("%d",&a[r][c]);
                    }
            }
        printf("\nEntered Matrix is:\n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",a[r][c]);
                    }
                printf("\n");
            }
        printf("\nTranspose of Matrix Is:\n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d",a[c][r]);
                    }
                printf("\n");
            }
        return 0;
    }