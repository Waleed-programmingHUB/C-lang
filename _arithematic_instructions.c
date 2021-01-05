#include <stdio.h>
#include <math.h>
int main()
{
    // Arithematic Operator in C
    float a = 2.0, b = 5.5;
    int x = 2, y = 5;
    printf("The Subtract 2.0 - 5.5 is : %f\n", a - b);
    printf("The Divide 2.0 / 5.5 is : %f\n", a / b);
    printf("The Multiple 2.0 x 5.5 is : %f\n", a * b);
    printf("The Power 5.5 to the power 2.0 is : %f\n", pow(b, a));
    // int to int
    printf("int  to int \nThe Add 2 + 5 is : %d\n", x + y);
    // int to int
    printf("int to float \nThe Add 2 + 5 is : %d\n", a + b);
    // float to float
    printf("float to float \nThe Add 2 + 5 is : %f\n", a + b);

    system("pause");
}