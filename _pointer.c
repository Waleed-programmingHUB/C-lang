#include <stdio.h>
// Pointer in C lang
void main()
{
    // &var -> address of variable
    // *var -> pointer of variable
    // **var -> pointer to pointer of variable
    int m = 34;
    int *n = &m;
    
    // print to console
    printf("the value of m : %d \n", m);
    printf("the value of m : %d \n", *n);
    printf("the address of m : %u \n", &m);
    printf("the address of n : %u \n", n);
    printf("the address of n : %u \n", &n);
    printf("the value of n : %u \n", *(&n));

    system("pause");
}