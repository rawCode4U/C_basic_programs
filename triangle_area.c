// 13. WAP to calculate area of a triangle. ( area = base*height/2) .
#include <stdio.h>

float area(float base , float height){
    float area;
    area = (base * height) / 2;
    return area;
}

int main()
{
    float base, height ;
    printf("Enter base and then height of your triangle\n");
    scanf("%f%f", &base, & height);
    printf("Area of Triangle = %f",area(base, height));
    return 0;
}