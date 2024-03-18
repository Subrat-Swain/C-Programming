// Progam For copy one file into another character wise;
#include<stdio.h>
#include<conio.h>
void main()
    {
        FILE * fp1, *fp2;
        char ch;
        fp1 = fopen("e://cdata/employee.txt", "r");
        fp2 = fopen("e://cdata/newemployee.txt", "w");
        if(fp1 == NULL || fp2 == NULL)
            printf("\nFile Error.....");
        else    
            {
                do
                {
                    ch = fgetc(fp1);
                    fputc(ch,fp2);
                } while (ch != EOF);
                fclose(fp1);
                fclose(fp2);
                printf("\nFile Copied Sucessfully");
                
            }
    }