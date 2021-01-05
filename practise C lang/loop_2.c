#include <stdio.h>
int main(){
    // Execise Multiplication of table For Loop
    int table = 2, num = 10,z = 1;
    for (z; z<= num; z++)
    {
        printf("%d x %d = %d\n",table , z,table * z);
    }
    // While Loop
    while (z>= num)
    {
        printf("%d x %d = %d",num,z,num * z);
        z++;
    }
    
    return 0;
}