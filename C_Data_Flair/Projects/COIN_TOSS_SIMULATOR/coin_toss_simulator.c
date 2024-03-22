#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
    {
        int n;
        srand(time(NULL));// algo generate for random number
        n = rand()%10;
        // printf("\n%d",n);
        if(n > 5)
            printf("\n*******Head********");
        else
            printf("\n*******Tail*******");
    }