#include <stdio.h>
// File I/O in C lang
void main()
{
    
    FILE *my_file_generated;
    char *data = "Generated-File";
    // Write file Mod 
    my_file_generated = fopen("generated.txt","w");
    fprintf(my_file_generated,"The Text is %s\n",data);
    // fprintf -> print to the file.txt
    fprintf(my_file_generated,"The Second Text is %s\n",data);
    fclose(my_file_generated);

    system("pause");
}