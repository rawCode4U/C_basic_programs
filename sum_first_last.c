//19 . WAP to print sum of first and last digit of a 4 digit number

#include <stdio.h>

int first_last_digitSum(int num){
    int first_digit , last_digit;
    int digitSum = 0 ;

    first_digit =  num % 10;

    while (num >= 10)
    {
        num = num / 10 ;
    }

    last_digit = num; 
     
    digitSum = first_digit + last_digit;
   
    return digitSum;
}

int main()
{
    int num ;
    printf("Enter your number \n");
    scanf("%d", &num);
    printf("Sum of first and last digits of %d is %d", num, first_last_digitSum(num));
    return 0;
}