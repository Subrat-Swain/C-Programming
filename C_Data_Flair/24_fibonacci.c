// Print the series of fibonacci series of a given number

#include<stdio.h>
int main()
    {   int n, a, b, c, i = 2;
        printf("Enter Limit:");
        scanf("%d", &n);
        a = 0;
        b = 1;
        if(n == 1)
            {
                printf("%d",a);
            }
        else if(n == 2)
            {
                printf("%d",b);
            }
        else if(n > 2)
            {
                printf("%d %d",a,b);
                while( i <= n-1)
                    {
                        c = a + b;
                        printf(" %d",c);
                        a = b;
                        b = c;
                        i++;
                    }
            }
            
        return 0;
    }