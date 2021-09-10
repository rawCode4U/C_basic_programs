// 17. WAP to swap two numbers.

#include <stdio.h>

int swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2= temp;
    printf("Number 1 : %d \n",num1);
    printf("Nmber 2 : %d \n", num2);
    return num1,num2;
}

int main()
{
    int num1 , num2 ;
    printf("Enter your number two numbers \n");
    scanf("%d%d", &num1 , &num2);
    printf("Number 1 : %d \n",num1);
    printf("Nmber 2 : %d \n", num2);
    printf("************** After Swapping *******************\n");
    swap(num1,num2);
    return 0;
}