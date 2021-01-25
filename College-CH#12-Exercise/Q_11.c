#include <stdio.h>
int main()
{
    // Q.11 Solution :-
    // Do While Loop
    int table, t_start;
    /*
    --- Printing a Table ---
    */
    printf("Enter a number which table you want to need : ");
    scanf("%d", &table); // Taking User Input
    t_start = 1;
    // Do While loop
    do
    {
        printf("%d x %d = %d\n", table, t_start, table * t_start);
        t_start = t_start + 1;
    } while (t_start <= 10);
    getch();
}