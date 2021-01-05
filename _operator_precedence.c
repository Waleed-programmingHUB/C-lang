#include <stdio.h>

void main()
{
    // Operator Precedence
    /*
    Priority Operator
        first -> * / %
        second -> + -
        third -> =
    */
    int x = 2, y = 3;
    printf("The Value of 3*x - 8*y is %d", 3 * x - 8 * y);
    printf("The Value of 3*x - 8*y is %d", 3 * x / 8 * y);
    // 8 * 3 / 3 * x = 24/6 will give you wrong answer
    system("pause");
}