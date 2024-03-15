#include<stdio.h>
int main()
    {
        /*
        1. scanf() returns number of input values it scanned.
        2. printf() returns the number of characters(Inc. the white spaces)
        3. printf("%Nd",variable) If N is greater than the length of variable, it takes N spaces to print
        4. scanf("%Nd",&variable) If length of the input value is greater than N, 
                then the input value is truncated upto N digits.
        5. Comment Lines:-
                Single Line comment:-//Comment
                Multi Line Comment:- /*
                                        c
                                        o
                                        m
                                        m
                                        e
                                        n
                                        t
                                    */
        /*
        6. Escape sequence:- is a sequence of two charcter started with a '\' &
                used inside a string literals

            \n :- New Line character
            \t :- Tab character
            \a :- beep sound
            \b :- backspace character
            \\ :- backslash
            \' :- Single quote
            \" :- Double quote

        7.  Type Casting:-
                Conversion of one data type to another is called typecasting.
                        1:-Implicit type conversion:-Automatic conversion of 
                                    one type to another called implicit conversion.
                                        Rules:-
                                            a:-Inside the expresion, lower type is converted to higher type.
                                            B:-In Case of assignment, type of right hand side expression is 
                                                                        converted to type of left hand side variable.

                        2:- Explicit type conversion:- Force conversion of one type to another by the programmer manually is called explicit type conversion.
                                        Syntx :- (typename) expression.
                                        Ex:- float a =18.7;
                                        int i;
                                        i = (int)(a+0.5)
        
        */                                  

       // 1 & 2:-
       int a,b,c,d,e;
       printf("Enter five numbers:-");
       scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
       printf("Numbers Are:-%d, %d, %d, %d, %d",a,b,c,d,e);

       // 3:-
       int n=5;// Here length of the variable 1 & N=5 so N>1 so it takes 5 spaces to print;
       printf("\n%5d",n);
       
       printf("\n");

       int m=123456;
       //Here length of the variable 6 & N=4 so N<6 so it doesn't take any spaces to print;
       printf("%4d",m);

        printf("\n");

       // 4:-
       int num, num2;
        /*
        Here If input integer length exceeds 5 
            Then after 5 digit remaining digits taken to the second input 
                i.e. for num=upto 5 digit for num2=remaining digits;
        */ 
        scanf("%5d %d", &num, &num2);
        printf("num = %d\n", num);
        printf("num2 = %d\n", num2);

        // 5:-

        // This is a single line Comment

        /*  This is a multi line :-
            C
            O
            M
            M
            E
            N
            T
        */

       // 6:-
       printf("\n1:-This (\n) will print in \n a New Line");
       printf("\n2:-This (\t) will t\tab a Character ");
       printf("\n3:-This (\a) will b\aeep sound ");
       printf("\n4:-This (\b) will b\backspace character");
       printf("\n5:-This (\\) will give b\\ackslash");
       printf("\n6:-This (\') will print S\'ingle quote");
       printf("\n7:-This (\") will print D\"ouble quote");

       printf("\n");

       // 7:-
                /*Implicit type converssion:-
                        a:- Inside the expresion, lower type is converted to higher type;
                                Inside the expresion, lower type is converted to higher type
                        b:- In Case of assignment, type of right hand side expression is 
                                                                        converted to type of left hand side variable*/
                            int j = 5;// every right value of assignment operator assign to left value in C
                            float k;
                            printf("\nj is a integer & value is :-%f",j);
                            // k = j;
                            printf("\nk is a float & value is :-%d",k);

                /*Explicit type Conversion:-
                        Force conversion of one type to another by the programmer manually */
                            float o =18.7;
                            int i;
                            i = (int)(o+0.5);
                            printf("\nValue Of i is:-%d",i);

       


        return 0;
    }