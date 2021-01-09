#include <stdio.h>
// File I/O in C lang

/*
    *** "file.extension","mode" ***
    Read Mode
    fopen("sample.txt","r")
    Write Mode
    fopen("sample.txt","w")
    Open and Append Mode
    fopen("sample.txt","a")

    --- Types of files ---
    1. Text File
    2. Binary File
*/
void main()
{
    // FILE datatype
    /* Make a pointer variable */
    FILE *my_f;
    printf("Well done waleed\n");
    my_f = fopen("sample.txt","r");
    my_f = fopen("sample.txt","w");

    system("pause");
}