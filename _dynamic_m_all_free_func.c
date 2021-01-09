#include <stdio.h>
int main(){
    // Quick Quiz
    // Free function with malloc function
    // using a free function
    int *ptr; // in malloc 
    int *ptr2; // in malloc 
    int number = 60000;

    ptr  =(int *) malloc(6 * sizeof(int));
    // for loop
    for(int a = 0 ; a < number ; a++){
        ptr2 =(int *) malloc(600000 * sizeof(int));
        printf("The value of %d element\n",a);
        scanf("%d",&ptr[a]);
        // free(pointer_4);
    }

    for(int a = 0 ; a < 6 ; a++){
        printf("The value of %d element is %d\n",a,ptr[a]);
    }


}