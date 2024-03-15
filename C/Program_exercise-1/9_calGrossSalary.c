// Write a Program to calculate gross salary of an employee. Input basic salary through keyboard.
//D.A is 40% of basic salary 
// H.R.A is 20% of basic salary
    /*
        Gross Salary = Basic Salary + D.A(Dearness Allowance) + H.R.A(House Rent Allowance)
                M.A :- Medical Allowance (Not Given in Question so we exclude it)
    */

#include<stdio.h>

    int main()
        {
            float basic_salary;

            double D_A, H_R_A, Gross_salary;

            printf("Enter Basic Salary:");

            scanf("%f", &basic_salary);

            D_A = 0.4 * basic_salary;

            H_R_A = 0.2 * basic_salary;

            Gross_salary = basic_salary + D_A + H_R_A;

            printf("Gross Salary is:%.2lf",Gross_salary);

        return 0;
        }