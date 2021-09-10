// 11. perform to get Modulus of Two Float number (Not Possible)

#include <stdio.h>

int main()
{
    float var1 , var2 ;
    scanf("%f%f", &var1, &var2);
    printf("%f",var2  % var1); // error: invalid operands to binary % (have ‘float’ and ‘float’)
    return 0;
}