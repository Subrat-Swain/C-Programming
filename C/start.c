/* C-Program Header File:-
    This is a C-Program Header File which include
    <stdio.h> library under which basic I/O funtions like scanf(),printf() lies */
#include<stdio.h>

/*C-Program Start Section:- 

    C-Program start with main(){} function */ 
        // Here int is the function return type i.e it is return a int i.e:- return 0;
        int main()
    {
        /*Declaration Section:-

        when we declare a variable without assignning a value
        in RAM it is prefilled with some unneccesary values called garbase value */

        int num1, num2, result;

        //Input Section

            /* Direct Input:-
                When Programmer knows the input value &
                it is specified directly while designing the program */

            num1 = 20;

            /*Runtime Input:-
                The input value is given by the program user 
                at the time of execution of program
                
                scanf() is a formatted function defined in <stdio.h> used to make runtime input
                Syntax:- scanf("FormatSpecifier",&variableName); */

            scanf("%d%d", &num1, &num2);
            /*
            Format Specifier:-

            Format:-        Data type:-     
                %d -------->    int
                %c -------->    Char
                %f -------->    Float
                %s -------->    String
               %ld -------->    Long int
               %lf -------->    Double
                %p -------->    Pointer
                %u -------->    Unsigned int
                %i -------->    Signed int

            */

        /* Output Section:-
            Results of the program are sent to the ouput device

            printf() is a formatted output function, defined in <stdio.h>,used to display the data value or any message on monitor.
            Syntax:- printf("formatspecifier",variable); */

        //Ths statement displays the message at monitor.
        printf("Message\n");// \n is used for new line

        //This statement displays num1 variable value
        printf("%d\n",num1);

        printf("Hello! this is our first program\n");

        /*returns function type value if main is int then it will return integer
        if main function is void it returns nothing i.e null; */
        return 0;
    }//This is End Section