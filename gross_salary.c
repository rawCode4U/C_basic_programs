// 22. Ramesh’s basic salary is input through the keyboard. 
// His Dearness Allowance (DA) is 40% of basic salary, and house rent allowance (HRA) is 20% of basic salary.
// Write a program to calculate his Gross salary.

#include <stdio.h>

float grossSalary(float basic_salary){
    float da , hra , gross_salary ;  // Dearness Allowance (DA) & House Rent Allowance (HRA)
    da = (basic_salary * 40) / 100 ; // DA is 40%
    hra = (basic_salary * 20) / 100 ; // HRA is 20 %
    gross_salary = basic_salary + da + hra ;

    return gross_salary;
}


int main()
{
    float basic_salary ;
    printf("Please Enter the Ramesh’s basic salary : ₹ ");
    scanf("%f", &basic_salary);
    printf("Gross Salary of Ramesh is ₹ %f", grossSalary(basic_salary));
    return 0;
}