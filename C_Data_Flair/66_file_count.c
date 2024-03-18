// Program for count space and character from file also lines
#include<stdio.h>
#include<conio.h>
void main()
    {
        FILE *fp;
        int sp = 0, cc = 0, nl = 0;
        char ch;
        fp = fopen("e://cdata/employee.txt", "r");
        if(fp == NULL)
            {
                printf("\nFile Not Found...");
            }
        else    
            {
                do
                {
                   ch = fgetc(fp);
                   if(ch == ' ')
                        sp++;
                    if(ch == '\n')
                        nl++;
                    else
                        cc++;
                } while (ch != EOF);
                printf("\nTotal character is %d", cc);
                printf("\nTotal space is %d", sp);
                printf("\nTotal Line is %d", nl);
                
            }
    }
