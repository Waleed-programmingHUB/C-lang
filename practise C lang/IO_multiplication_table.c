#include <stdio.h>
// Using I\O in C lang
void main(){

    FILE *table_file;
    int number;

    printf("Enter the integer value you need the table of \n");
    scanf("%d",&number);
    
    // write the table to text file
    table_file = fopen("Math_table.txt","w");
    
    for(int i = 0;  i < 10 ;i++){
        fprintf(table_file,"%d x %d = %d\n",number , i + 1,number * (i + 1));
    }
    fclose(table_file);
    printf("Successfully generated table of %d to Math_table.txt\n",number);
    system("pause");
}