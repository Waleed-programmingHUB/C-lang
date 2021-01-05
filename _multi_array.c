#include <stdio.h>
// Multi Dimension Array in C lang
void main()
{
    int u = 2, k = 2;
    int no_of_user[2][2] = {
        {1, 3}, {2, 2}};
    for (int y = 0; y < u; y++)
    {
        for (int z = 0; z < k; z++)
        {
            printf("The value of %d and %d is : %d\n",y + 1,z + 1,no_of_user[z][y]);
        }
    }

    system("pause");
}