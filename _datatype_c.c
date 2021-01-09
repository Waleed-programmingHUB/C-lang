#include <stdio.h>

void main()
{
    // Data-type in C
    int a = 12;
    float b = 21.1;
    char d = 'A';
    char *text = "C lang"; // this is a pointer variable character
    double c = 1222.2212;
    short s = 12888.2212;
    long double Ld = 12888.2212;
    long x = 123.52l;
    unsigned long Ul = 55;
    unsigned short Us = 55;

    // Format Specifiers in C lang
    printf("The value of int a is %d \n", a);
    printf("The value of float b is %f \n", b);
    printf("The value of double c is %f \n", c);
    printf("The value of char d is %c \n", d);
    printf("The value of x is %f \n", x);
    printf("The value of Text is %s \n", text);
    // Exit the windows if user press any key

    system("pause");
}
