// Program for read a file char and string
#include<stdio.h>
#include<conio.h>
void main()
    {
        FILE *fp = NULL;
        char ch;
        fp = fopen("e://cdata/employee.txt", "r");
        if(fp == NULL)
            {
                printf("\nFile Not Open");
            }
        else
            {
                do
                {
                    ch = fgetc(fp);;
                    printf("%c",ch);
                } while (ch != EOF);// EOF :- Preprocessor Directive Macro statement
                fclose(fp);
            }
    }