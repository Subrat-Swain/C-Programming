// Program for creating own type command 
#include<stdio.h>
#include<conio.h>
void main(int argc, char *argv[])
    {
        FILE *fp = NULL;
        char ch;
        if(argc == 2)
            {
                fp = fopen(argv[1], "r");
                if(fp == NULL)
                    printf("File %s NOt Found", argv[1]);
                else    
                    {
                        do
                        {
                            ch = fgetc(fp);
                            printf("%c",ch);
                        } while (ch != EOF);
                
                    }
                fclose(fp);
            }
        else
        printf("\nInvalid Command!!!");
    }