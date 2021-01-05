#include <stdio.h>
// function prototype

void wrong_swap(int a,int b); // Call by value
void correct_swap(int *a,int *b); // Call by reference

void main(){
    // Variable
    int n = 3, m = 4;
    // print to console
    printf("The present value of m and m before swap is %d and %d\n",n,m);
    // function call
    // wrong_swap(n,m); // will not work due to call by value
    correct_swap(&n,&m);// will work due to call by reference
    printf("The after value of m and m before swap is %d and %d\n",n,m);
    system("pause");
}
// function defination
void wrong_swap(int a,int b){
    int temp;
    a = temp;
    a = b;
    b = temp;
}

void correct_swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
