#include <stdio.h>

int main()
{
    // & -> is called (At-Address-of)
    float length, width, area;

    printf("IO C\n");
    printf("Enter Lenght : ");
    scanf("%f", &length);
    printf("Enter width : ");
    scanf("%f", &width);
    area = length * width;
    printf("\nThe area is %f", area);
    system("pause");
}
