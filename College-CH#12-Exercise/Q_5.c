#include <stdio.h>
int main()
{
    // Q.5 part(a) Solution :-

    int k = 0;
    // While Loop
    printf("While Loop \n");
    while (k <= 5)
    {
        printf("%3d %3d\n", k, 10 - k);
        k++;
    }

    // Q.5 part(b) Solution :-
    int j = 10;

    printf("For Loop \n");
    // For Loop
    for (int i = 0; i <= 5; i++)
    {
        printf("%3d %3d\n", i, j);
        j -= 2;
    }
    getch();
}