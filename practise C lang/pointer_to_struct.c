#include <stdio.h>
#include <string.h>

// Struct C lang
struct employee
{
   int code;
   float salary;
   char name[20];
};

void main(){
    struct employee e1 , *_pointer;
    _pointer = &e1;
    // (->) this is a arrow operator
    // (*_pointer).code = 101; // or you can write :_pointer->code = 101;
    _pointer->code = 101;
    printf("Code is %d\n",e1.code);
    printf("Code is %d\n",e1.code);
    printf("Code is %d\n",e1.code);
    system("pause");
}