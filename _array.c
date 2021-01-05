#include <stdio.h>
/* --- Array in C lang ---*/
void main()
{


    // Array
    // int marks[4] = {55,112,54,321};
    int marks[4];

    // print to console
    printf("Enter the value of marks for subject 1 : ");
    // getting the input
    scanf("%d", &marks[0]);

    // print to console
    printf("Enter the value of marks for subject 2 : ");
    // getting the input
    scanf("%d", &marks[1]);

    // print to console
    printf("Enter the value of marks for subject 3 : ");
    // getting the input
    scanf("%d", &marks[2]);

    // print to console
    printf("Enter the value of marks for subject 4 : ");
    // getting the input
    scanf("%d", &marks[3]);

    // print to console
    printf("You have entered :\n");
    printf("-> Marks 1 : %d \n",marks[0]);
    printf("-> Marks 2 : %d \n",marks[1]);
    printf("-> Marks 3 : %d \n",marks[2]);
    printf("-> Marks 4 : %d \n",marks[3]);
    system("pause");
}