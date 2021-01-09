#include <stdio.h>
// File I/O in C lang

void main()
{
    // FILE Pointer
    FILE *o;
    o = fopen("generated.txt","r");
    // read file character by charcter
    char r = fgetc(o);
    // this print character only one from file
    // printf("The Value of my character is :%c\n",r);
    
    // using fgetc function
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    printf("The Value of my character is :%c\n",fgetc(o));
    fclose(o);
    // using fputc function 
    FILE *i;
    i = fopen("putcDemo.txt","w");
    putc('G',i);
    fclose(i);
    system("pause");
}