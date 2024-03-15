// Check Whether the number is a prime number or not
#include<stdio.h>
int main()
    {
        int n, i = 2, f = 0;
        printf("Enter Your Number:");
        scanf("%d", &n);
        while(i < n)
            {
                if(n % i == 0)
                    {
                        f = 1;
                        break;
                    }
                i++;
            }
        if(f == 0)
            {
                printf("Number is a Prime Number");
            }
        else
            {
                printf("Number is not a Prime Number");
            }
        return 0;
    }