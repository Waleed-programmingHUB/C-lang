#include <stdio.h>
int main()
{
    // For Nested Loop
    for (int i = 1; i < 5; i++)
    {
        for (int t = 1; t < 5; t++)
        {
            printf("Outer : %d ,inner : %d\n", i, t);
        }
    }
    // While Nested Loop
    int p = 5, o = 2;
    while (p < 10)
    {
        while (o > 10)
        {
            printf("Outer : %d ,inner : %d\n", p, o);
        }
    }

    return 0;
}