#include <stdio.h>

void main()
{
    int marks[4];
    // Input user Loop
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for subject %d : ",i+1);
        scanf("%d", &marks[i]);
    }
    // Output user loop
    for (int i = 0; i < 4; i++)
    {
        printf("-> Marks for subject %d is : %d\n",i+1,marks[i]);
    }

    system("pause");
}