#include <stdio.h>
int main()
{
    // Q.13 Solution :-
    int u, d;
    printf("Nested For Loop\n");
    // For Loop
    for (int u = 0; u <= 5; u++)
    {
        // Nested For Loop
        for (d = 0; d <= u; d++)
        {
            printf("%3d", d);
        }
        printf("\n");
    }
    getch();
}