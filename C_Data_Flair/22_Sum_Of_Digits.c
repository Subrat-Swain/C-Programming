// Addition of individual digit of number

#include<stdio.h>
int main()
    {
        int n, r, s = 0;
        printf("Enter Your Number: ");
        scanf("%d", &n);
        while(n != 0)
            {
                r = n % 10;
                s = s + r;
                n = n / 10;
            }
        printf("Sum Of Digits: %d",s);
        return 0;
    }