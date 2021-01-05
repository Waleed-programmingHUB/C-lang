#include <stdio.h>
/*---- User defined function in C Lang ----*/
int r; // Global Variable

void display_title(); // -> Function Prototype
void user_input();    // -> Function Prototype
int mul(int a);       // -> Function Prototype


int main(/*--- Main Function ---*/)
{
    // Function Call
    display_title();
    scanf("%d", &r);
    // function call
    mul(r);
    return 0;
}

// -> Function Defination
int mul(int a)
{
    // For Loop
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
}
// -> Function Defination
void display_title()
{
    printf("Enter Multiplication of Number \n");
    mul(r);
}