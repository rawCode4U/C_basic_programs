// 18 . WAP to convert Fahrenheit to Celsius . c =(f-32)*5/9.

#include <stdio.h>

int celsiusConverter(int temp){  

    temp = (temp - 32) * 5 / 9 ;
   
    return temp;
}

int main()
{
    int temp ;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%d", &temp);
    printf("Temeperature in celsius : %d", celsiusConverter(temp) );
    return 0;
}