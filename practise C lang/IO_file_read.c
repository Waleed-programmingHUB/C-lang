#include <stdio.h>
// File I/O in C lang
void main()
{
    // FILE datatype
    /* Make a pointer variable */

    FILE *my_f;
    // Read Mode C lang
    my_f = fopen("sample.txt","r");
    int number;
    fscanf(my_f,"%d",&number);
    fclose(my_f);
    printf("The file value is :%d\n",number);
    system("pause");
}