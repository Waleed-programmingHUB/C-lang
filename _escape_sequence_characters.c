#include <stdio.h>

void main(){
    /*
        --- Escape Sequence Characters ---
        1. \n -> New line
        2. \t -> some space in text
        3. \',\" -> print the text,value with single qoutation mark e.g => \'Waleed Sarwar'\
        4. \\ -> print the text,value with double backslash e.g => \ Waleed Sarwar \
    */    
    printf("The Line new\n");
    printf("\tThe Line space\t\n");
    printf("\" The Line  \" \n");
    printf("\' The Line  \' \n");
    printf("\\ The Line  \\ \n");
    system("pause");
}