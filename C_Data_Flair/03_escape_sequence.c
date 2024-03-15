/* 
    Escape Sequence:- Special Characters Used for Formatting of console screen i.e output result
        \n :- New Line Character
        \t :- Tab Character (8 characters)
        \" :- Double Quote Character
        \' :- Single Quote Character
        \a :- Alert Character(Sound):- Some OS doesn't support this escape sequence
        \  :- Slash :- Inorder to print the escape sequence charcter as it is we use another slash before escape sequence;
*/

#include<stdio.h>
void main()
{
    printf("\\n is a New Line Character\n ");
    printf("\\t is used for t\ta\tb of 8\tcharacters\n");
    printf("\"\" Used for \"Double Quotes\"\n");
    printf("\'\' is Used for \'Single Quote\'\n");
    printf("\\a Used for \aAlert Sound\n");
    printf("Slash is Used For Printing special characters escape sequence as it is\n ");
}