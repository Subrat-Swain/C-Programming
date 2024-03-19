// Program for create own copy command to copy file from one file to another
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc, char *argv[])
    {
        FILE *fp1 = NULL, *fp2 = NULL;
        char ch;
        if(argc == 3)
            {
                fp1 = fopen(argv[1], "r");
                fp2 = fopen(argv[2], "w");
                if(fp1 == NULL || fp2 == NULL)
                    printf("\nFile Not Found");
                else
                    {
                        do
                        {
                            ch = fgetc(fp1);
                            fputc(ch, fp2);
                        } while (ch != EOF);
                        printf("\nOne File Copied successfully");
                    }
                fclose(fp1);
                fclose(fp2);
            }
        else
        printf("Required two file name:");
    }