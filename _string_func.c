#include <stdio.h>
#include <string.h>
int main()
{
    // strings function come from string.h header file
    // Check the length of character
    char *_var = "Ali";
    int lenght = strlen(_var); // strlen() this function, checks the no of word.
    printf("The lenght of word is : %d\n", lenght);

    // Replace the text of character
    char target_word[45]; // strcpy() this function, Replace the text and to array.
    strcpy(target_word, _var);
    printf("The array of word is : %s\n", target_word);

    // Concatenate the text of character
    char *_var1 = "Good", *_var2 = " Job";
    // strcat(_var1,_var2); // strcat() this function, Concatenate the two string character.
    printf("The Concatenate of words is : %s\n", strcat(_var1, _var2));

    // Campare the text of character, ASCII value
    char *_var3 = "Good", *_var4 = " Job";
    int _answer = strcmp(_var3, _var4); // strcmp() this function, Campare the two string character if strings are equal from ASCII values.
    printf("The Compare two String returns : %d\n", _answer);
    system("pause");

    return 0;
}