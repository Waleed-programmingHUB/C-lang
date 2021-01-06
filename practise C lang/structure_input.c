#include <stdio.h>

// Structure in C Lang
struct student
{
    int roll_number;
    char *name;
    char *subject;
    float _className;
};
void main(){
    // Structure Object
    struct student s2;
    // print to console
    printf("Enter Name of student : \n");
    scanf("%s",s2.name); // taking input
    printf("Enter Roll Number of student : \n");
    scanf("%d",s2.roll_number);// taking input
    printf("Enter Class of student : \n");
    scanf("%.3f",s2._className);// taking input
    printf("Enter Subject's of student : \n");
    scanf("%s",s2.subject);// taking input

    // output
    printf("\t--- Output ---\n");
    printf("Name : %s\n",s2.name);
    printf("Roll Number : %d\n",s2.roll_number);
    printf("Subject's : %s\n",s2.subject);
    printf("Class : %.3f\n",s2._className);
    system("pause");
}