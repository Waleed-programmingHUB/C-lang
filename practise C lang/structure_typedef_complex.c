#include <stdio.h>
// structure typeDef
typedef struct complex
{
    int real;
    int complex;
} _cplx;

void display(_cplx c);
void main()
{
    _cplx c_num[5]; // structure in array
    // input loop
    for (int i = 0; i < 5; i++)
    {
        // for real
        printf("Enter real number for %d num\n",i + 1);
        scanf("%d",&c_num[i].real);
        // for complex
        printf("Enter complex number for %d num\n",i + 1);
        scanf("%d",&c_num[i].complex);
    }
    // display loop
    for (int i = 0; i < 5; i++)
    {
        display(c_num[i]);
    }
    
    system("pause");
}
void display(_cplx c){
    printf("The value of real part is : %d\n",c.real);
    printf("The value of imaginary part is : %d\n\n",c.complex);
}