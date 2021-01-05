#include <stdio.h>
// 3D Array in C lang

void main()
{
    // Array
    int my_array[3][4][5];
    printf("-> 3D Array of Address\n");
    // Nested For Loop
    // Show the Address of variables
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            for (int c = 0; c < 5; c++)
            {
                printf("\tThe Address of Array[%d][%d][%d] is %u \n", a, b, c, &my_array[a][b][c]);
            }
        }
    }

    system("pause");
}