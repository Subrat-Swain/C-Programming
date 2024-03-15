// Check whether a number is palindrome or not ??

#include<stdio.h>
int main()
    {
        int n, s = 0, r, m;
        printf("Enter YOur Number: ");
        scanf("%d", &n);
        m = n;
        while(n != 0)
            {
                r = n % 10;
                s = s * 10 + r;
                n = n / 10;
            }
        if(s == m)
            printf("%d is a Palindrome",m);
        else
            printf("%d is not a Palindrome", m);

        return 0;
    }