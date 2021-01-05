#include <stdio.h>
int main(){
    // 97 to 122 = small (a) to (z) ASCII Value
    char value;
    printf("Enter the Character : ");
    scanf("%c",&value);
    if (value <= 122 && value>= 97)
    {
        printf("It is Lowercase character......\n");
    }else
    {
        printf("Its not Lowercase character.....\n");
    }
    system("pause");
}