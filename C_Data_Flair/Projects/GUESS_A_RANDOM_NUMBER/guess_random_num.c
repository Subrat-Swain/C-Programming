#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
    {
        int me, you, count = 5, i=1;
        srand(time(NULL));
        me = rand() % 100;  // code for generate random number 1-100
        while(i <= 5)
            {

                printf("\nEnter a Number For Guess..you left %d chance:",count);
                scanf("%d",&you);
                if(me == you)
                {
                    printf("\n\nGreat... You Win game...");
                    break;
                }
                else if(you > me)
                    {
                        printf("\n\nHint..Your No is Greater...");
                        count--;
                    }
                else
                    {
                        printf("\n\nHint..Your No is Less.....");
                        count--;
                    }
                i++;
            }
        printf("\n\n!!!Game Over You Lose!!!");
        
        return 0;
    }