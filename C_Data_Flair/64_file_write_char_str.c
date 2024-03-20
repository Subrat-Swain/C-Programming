// Program for write a char and string into a file
#include<stdio.h>
#include<conio.h>
void main()
    {
        FILE *fp = NULL;
        char ch;
        fp = fopen("e://cdata/employee.txt", "w");// Folder Must Be there // file automatically created
        if(fp == NULL)
            {
                printf("\nFile Not Created");
            }
        else    
            {
                printf("\nEnter a string enter 0 to stop:");
                while(1)
                    {
                        ch = getche();
                        if(ch == '0')
                            break;
                        fputc(ch,fp);
                    }
                printf("\n File Created.....");
                fclose(fp);
            }
    }
