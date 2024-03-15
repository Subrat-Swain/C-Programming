/*
    Data type:- specifies following about a variable.
                    (i):-type of data it can contain
                    (j):-range of data it can store
                    (k):-size of memory space it will occupy.

                            Data Type:-

        Primitive:-                     Non-Primitive:-
                    
            integer             Derived:-           User-Defined:-
            float                   String              Union
            character               Array               Structure
            long                    Pointer             Enum
            double
            void

        unsigned int:- No signed bit to decide a number is positive or negative;
                            so it cannot take -ve numbers;

        signed int:- An int type is signed by default
                            So we can store  both +ve and -ve numbers.

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
#include<stdio.h>
void main()// In this void main function it doesn't return anything
    {   //Primitive Data Types
        int a = 5;
        float b = 5.5;
        char c = 'a';
        long d = 8;
        double e = 8.8;
        unsigned int f = -8;
        signed int g = -9;

        //Integer
        printf("\na is an integer & its value is %d", a);

        //float
        printf("\nb is a float & its value is %f", b);

        //char
        printf("\nc is  character & its value is %c",c);

        //long
        printf("\nd is a long data type & it's value is %ld",d);

        //double
        printf("\ne is  double & it's value is %lf",e);

        //unsigned
        printf("\nf is an unsigned int & it's value is %u",f);

        //signed int
        printf("\ng is a signed int & it's value is %i",g);

        // Pointer:- For Pointer we use %p format specifier;


        return 0;
    }