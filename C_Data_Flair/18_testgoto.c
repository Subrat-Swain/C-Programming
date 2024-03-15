//Result Processing Program
#include<stdio.h>
#include<conio.h>

void main()
    {
        int h, e, m, c, total, per;

  hindi:printf("\nEnter Marks of Hindi:");
        scanf("%d", &h);
        if(h > 100)
            {
                printf("\nInvalid Marks Enter Again!!!\n");
                goto hindi;
            }
    eng:printf("\nEnter Marks of English:");
        scanf("%d", &e);
        if(h > 100)
            {
                printf("\nInvalid Marks Enter Again!!!\n");
                goto eng;
            }
   math:printf("\nEnter Marks of Mathematics:");
        scanf("%d", &m);
        if(h > 100)
            {
                printf("\nInvalid Marks Enter Again!!!\n");
                goto math;
            }
   chem:printf("\nEnter Marks of Chemistry:");
        scanf("%d", &c);
        if(h > 100)
            {
                printf("\nInvalid Marks Enter Again!!!\n");
                goto chem;
            }
        total = h + e + m + c;
        per = total/4;
        printf("\nTotal Marks: %d",total);
        printf("\nTotal Percentage Is: %d",per);
        
        if(per<35)
            {
                printf("\nYou Are Fail......");
            }
        if(per>=35 && per<45)
            {
                printf("\nYou are Pass in III division......");
            }
        if(per>=45 && per<60)
            {
                printf("\nYou are Pass in II division.......");
            }
        if(per>=60)
            {
                printf("\nYou are in I division......");
            }
    }