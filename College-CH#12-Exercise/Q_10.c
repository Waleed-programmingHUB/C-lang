#include <stdio.h>
int main(){
    
    // Q.10 Solution :-
    int even = 1;
    /*
    --- Printing a Even Number ---
    */
    // Do While Loop
    printf("Do While Loop\n");
    do
    {
        // If condition
        if (even % 2 == 0)
        {
            printf("Even number %d \n", even);
        }
        even = even + 1;

    } while (even <= 30);
    getch();
}