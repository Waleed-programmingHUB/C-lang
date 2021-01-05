#include <stdio.h>
// Reverse Array 
// function prototype
void reverse_array(int *_array, int number_of);
// Main function
void main()
{
    // array
    int my_array[] = {1, 2, 3, 4, 5, 6, 7};
    // reverse array number function with for loop
    reverse_array(my_array, 7); // function call
    // for loop
    for (int z = 0; z < 7; z++)
    {
        printf("The value of %d element is : %d\n", z, my_array[z]);
    }

    system("pause");
}
// function defination
void reverse_array(int *_array, int _number_of)
{
    int temp;
    // For Loop
    for (int x = 0; x < (_number_of / 2); x++)
    {
        // reversing the Integer array
        temp = _array[x];
        _array[x] = _array[_number_of - x - 1];
        _array[_number_of - x - 1] = temp;
    }
}