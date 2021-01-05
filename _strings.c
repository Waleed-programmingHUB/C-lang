#include <stdio.h>

void main()
{
    // String in C Lang

    // First Way of string
    char name[] = "Waleed";
    char *_pointer = name;
    // While Loop
    while (*_pointer != '\0')
    {
        printf("%c", *_pointer);
        _pointer++;
    }
    printf("\n");

    // Second Way of string
    char *new_name = "Waleed ali sarwar";
    printf("your full name is : %s\n",new_name);
    
    // Third Way of string
    // Multi-word Strings need gets() function
    // prints a string using puts() function
    char last_name[50];
    printf("Enter Your last name : %s\n",last_name);
    gets(last_name); // string input function
    printf("your last name is : %s\n",last_name);
    puts(last_name); // string output function
    system("pause");
}