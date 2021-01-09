#include <stdio.h>
// File I/O in C lang
void main()
{
    // IO file if Exists

    // Make a pointer variable
    // FILE datatype
    FILE *my_f;

    // Read Mode C lang
    my_f = fopen("sample.txt", "r");
    int number;

    if (my_f == NULL)
    {
        printf("sample.txt file doesn't exists...\n");
    }
    else
    {
        fscanf(my_f, "%d", &number);
        fclose(my_f);
        printf("The file value is :%d\n", number);
    }

    system("pause");
}