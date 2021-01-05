#include <stdio.h>

void main(){
    // Pointer Array in C lang
    int totat_marks[4];
    int *_pointer;
    // _pointer = &totat_marks[0];
    _pointer = totat_marks;
    // input
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the Data Size of value is : %d \n",i + 1);
        scanf("%d",_pointer);
        _pointer++;
    }
    // output
    for (int i = 0; i < 4; i++)
    {
        printf("-> Data Size of value %d is : %d \n",i+1,totat_marks[i]);
    }
    
    system("pause");
}