// 15. WAP to print sum of all the digit of a number.

#include <stdio.h>

int digitSum(int num){
    int digitSum = 0 ;  

    while(num != 0){
        digitSum +=  num%10;
         num = num/10;
    }
   
    return digitSum;
}

int main()
{
    int num ;
    printf("Enter your number \n");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d", num, digitSum(num));
    return 0;
}