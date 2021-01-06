#include <stdio.h>
#include <string.h>
// Structure
struct employee
{
   int code;
   float salary;
   char name[20];
};
// function prototype
void show_function(struct employee emp);

void main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 458648;
    ptr->salary = 1000.0;
    strcpy(ptr->name,"Waleed Ali Sarwar");
    // function call
    show_function(e1);

    system("pause");
}
// function defination
void show_function(struct employee emp)
{
    printf("\t-- Output --\n");
    printf("The code of employee is : %d\n",emp.code);
    printf("The name of employee is : %s\n",emp.name);
    printf("The salary of employee is : %.3f\n",emp.salary);
}