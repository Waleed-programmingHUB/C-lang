#include <stdio.h>
// File I/O in C lang

void main()
{
    // FILE Pointer
    FILE *o;
    char c;
    o = fopen("fgetc-Demo.txt","r");
    c = fgetc(o);
    // While loop
    while (c != EOF)
    {
        printf("%c",fgetc(o));
        c = fgetc(o);
    }
    
    system("pause");
}