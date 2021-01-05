#include <stdio.h>
// Recursion in C lang
int factorial(int x); // function prototype
int main(){
    int f;
    printf("Enter Factorial Number \n");
    scanf("%d",&f);
    // function call
    factorial(f);

    system("pause");
}
// this function also called Recursion in C lang
int factorial(int x){
    if (x == 1 || x == 0)
    {
        return 1;
    }else
    {
        return x * factorial(x - 1);
    }
}