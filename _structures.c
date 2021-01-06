#include <stdio.h>

// Structure in C Lang
struct student
{
    int roll_number;
    char *name;
    char *subject;
    float _className;
};

int main()
{
    // initialize
    // Syntax
    struct student s1;
    // (.)-> Dot is a Member Operator
    s1.name = "Waleed Sarwar";
    s1.subject = "English ,Computer";
    s1.roll_number = 416;
    s1._className = 12.0;
    s1._className = 12.0;

    printf("\t--- Structure ---\n");
    printf("The name of student : %s\n",s1.name);
    printf("The subjects of student : %s\n",s1.subject);
    printf("The roll number of student : %d\n",s1.roll_number);
    printf("The name of student : %.3f\n\n",s1._className);
    system("pause");
}