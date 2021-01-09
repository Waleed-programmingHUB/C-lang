#include <stdio.h>
// Using I\O in C lang
void main(){
   printf("IO Read / Write Operation in C lang.\n");
    FILE *_write,*_read;

    _read = fopen("_read.txt","r");
    _write = fopen("_write.txt","w");
    
    char c = fgetc(_read);
    while(c!=EOF){
        printf("Writing File\n");
        fputc(c,_write);
        printf("Reading File\n");
        c = fgetc(_read);
    }
    fclose(_read);
    fclose(_write);
    printf("Operation Read / Write Completed.\n");
    system("pause");
}