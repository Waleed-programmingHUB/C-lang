#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototype
int snakeWatergun(char you , char computer);

void main(){
    // Character Declear
    char you , computer;
    // Generate a random number
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    // if else-if condition
    if (number < 33){
        computer = 's';
    }else if (number > 33 && number <66){
        computer = 'w';
    }else{
        computer = 'g';
    }
    // user input here
    printf("Enter 's' for snake , 'w' for water and 'g' for gun.\n");
    scanf("%c",&you);

    // function call
    int result = snakeWatergun(you,computer);
    printf("You User %c and CPU choice is %c. \n",you,computer);
    // if statement here 
    if (result == 0){
        printf("Game draw!\n");
    }
    // else-if statement here
    else if(result == 1){
        printf("You Win\n");
    }
    else{
        printf("You lose !!!\n");
    }
    // to exit the console window here 
    system("pause");
}
// function defination
int snakeWatergun(char you , char computer){
    // returns 1 if you win , -1 if you lose and 0 if draw
    if(you == computer){
        return 0;
    }

    if(you == 's' && computer == 'w'){
        return -1;
    }
    else if(you == 'w' && computer == 's'){
        return 1;
    }

    if(you == 's' && computer == 'g'){
        return 1;
    }
    else if (you == 'g' && computer == 's'){
        return -1;
    }

    if(you == 'w' && computer == 's'){
        return -1;
    }
    else if (you == 's' && computer == 'w'){
        return 1;
    }
    return 0;
}