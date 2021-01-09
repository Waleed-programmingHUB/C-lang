#include <stdio.h>
#include <stdlib.h>

// dynamic memory allocation in C lang
void main(){
    // Pointer Integers here
    int *pointer; // in using malloc
    int *pointer_2;// in calloc
   

    // using malloc function 
    // the sizeof operator is here
    printf("The size of int on my pc is %d\n",sizeof(int));
    printf("The size of float on my pc is %d\n",sizeof(float));
    printf("The size of char on my pc is %d\n",sizeof(char));
    printf("The size of double on my pc is %d\n",sizeof(double));
    // pointer =(int *) malloc(6 * sizeof(int));
    printf("using a malloc\n");
    pointer =(int *) malloc(6 * sizeof(int));
    
    // for loop
    for(int a = 0 ; a < 6 ; a++){
        printf("The value of %d element\n",a);

        scanf("%d",&pointer[a]);
    }

    for(int a = 0 ; a < 6 ; a++){
        printf("The value of %d element is %d\n",a,pointer[a]);
    }

    // using a calloc
    printf("using a calloc\n");
    // pointer_2 =(int *) calloc(6 ,sizeof(int));
    
    // for loop
    // for(int a = 0 ; a < 6 ; a++){
    //     printf("The value of %d element\n",a);

    //     scanf("%d",&pointer_2[a]);
    // }

    // for(int a = 0 ; a < 6 ; a++){
    //     printf("The value of %d element is %d\n",a,pointer_3[a]);
    // }

    // Quick Quiz
    // using a calloc  practice here
    int *pointer_3; // in calloc 
    int number;
    printf("How many integers do you want to enter :\n");
    scanf("%d",&number);
    pointer_3 =(int *) calloc(number ,sizeof(int));
    
    // for loop
    for(int a = 0 ; a < number ; a++){
        printf("The value of %d element\n",a);
        scanf("%d",&pointer_3[a]);
    }

    for(int a = 0 ; a < number ; a++){
        printf("The value of %d element is %d\n",a,pointer_3[a]);
    }


    system("pause");
}