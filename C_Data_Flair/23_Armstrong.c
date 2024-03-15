#include<stdio.h>
int main()
    {
        int n, r, m, s = 0;
        printf("Enter Your Number:");
        scanf("%d", &n);
        m = n;
        while(n != 0)
            {
                r = n % 10;
                s = s + (r * r * r);
                n = n / 10;
            }
        if(m == s)
            printf("%d is an Armstrong",m);
        else
            printf("%d is not an Armstrong",m);
        return 0;
    }