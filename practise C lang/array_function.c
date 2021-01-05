#include <stdio.h>

// function prototype
void print_array(int *_pointer, int no_of);
void main()
{
    // Array
    int my_array[] = {
        11,22,33,44,55,66,77,88,99
    };
    // function call
    print_array(my_array,8);

    system("pause");
}
// function defination
void print_array(int _pointer[], int no_of)
{
    for (int x = 0; x < no_of; x++)
    {
        printf("the value of element %d is %d\n", x + 1, _pointer[x]);
    }
    _pointer[2] = 5555;
}