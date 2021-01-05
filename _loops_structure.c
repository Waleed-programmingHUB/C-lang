#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    // While-Loop Statement
    while (a < 10)
    {
        printf("Pakistan %d\n", a);
        a++;
    }
    do
    {
        printf("Pakistan Do %d\n", a);
        a++;
    } while (a < 10);
    return 0;
}