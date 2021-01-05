#include <stdio.h>
int main(){
    int o = 2;
    int *_pointer = &o;
    printf("The value of pointer arithematic is _pointer : %u\n",_pointer);
    _pointer = _pointer + 1;
    // _pointer++;
    printf("The value of pointer arithematic is _pointer : %u\n",_pointer);
    return 0;
}