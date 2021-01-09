#include <stdio.h>
void main()
{
    int a, b, c;
    FILE *file;
    // read an integer value through I/O C lang
    file  = fopen("IO_read.txt","r");
    fscanf(file,"%d %d %d",&a,&b,&c);
    printf("The values of a b and c is %d %d %d\n",a,b,c);

    system("pause");
}