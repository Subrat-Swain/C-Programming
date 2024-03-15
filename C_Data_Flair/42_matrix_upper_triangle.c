// Program for Upper triangle of Matrix
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
    {
        int a[50][50], m, n, r, c;
        printf("\nEnter values of rows and columns:");
        scanf("%d%d",&m,&n);
        printf("\nEnter Elements:");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        scanf("%d", &a[r][c]);
                    }
            }
        printf("\nMatrix Is:\n");
        for(r = 0; r < m; r++)
            {
                for(c = 0; c < n; c++)
                    {
                        printf("%5d", a[r][c]);
                    }
                printf("\n");
            }
        if(m != n)
            printf("\n!!!Invalid Matrix (Not a Square Matrix) for Diagonal Elements!!!");
        else
            {
                //Upper Triangle Elements are
                printf("\nUpper Triangle Elements are:\n");
                for(r = 0; r < m; r++)
                    {
                        for(c = 0; c < n; c++)
                            {
                                if(r <= c)
                                    printf("%5d",a[r][c]);
                            }
                        printf("\n");
                    }
            }
        
        return 0;
    }