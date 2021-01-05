#include <stdio.h>
// Multiplication of table using an Array in C lang

// function prototype
void show_table(int *array_mul, int table, int limit);

void main()
{
    // make an array
    int array_table[1][10];

    // variable for user input
    int _in, _limit_number;

    // do while loop
    //for not exit if the user input is over number,than break the program
    do
    {
        // we are taking the user input through to console
        printf("Enter Multiplication of Number :\n");
        scanf("%d", &_in);

        printf("Enter Limit you want :\n");
        scanf("%d", &_limit_number);

        // function call
        show_table(array_table[0], _in, _limit_number);
    } while (_in <= 10);

    system("pause");
}
// function defination
void show_table(int *array_mul, int table, int limit)
{
    printf("-> The Muliple of table is %d\n", table);
    // for Loop with Array
    for (int w = 0; w < limit; w++)
    {
        array_mul[w] = table * (w + 1);
    }
    // Loop
    for (int q = 0; q < limit; q++)
    {
        printf("\t%d x %d = %d\n", table, q + 1, array_mul[q]);
    }
    printf("\n"); // for new Line
}