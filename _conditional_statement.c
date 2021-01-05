#include <stdio.h>
int main()
{
    // Conditional in C
    int a;
    printf("Enter Age : "); // Print on the Console
    scanf("%d", &a);        // Taking User input through the Console
    // If-else , else-if statement
    if (a >= 90 /*--- Relational Operator ---*/)
    {
        printf("You are above 90 ,you cannot drive....\n");
    }
    else if (a == 50 /*--- Relational Operator ---*/)
    {
        printf("Half Century....");
    }
    else
    {
        printf("You can drive.......\n");
    }
    // if-statement check even and odd
    int x;
    printf("Enter Number : ");
    scanf("%d", &x);
    if (x % 2 == 0 /*--- Relational Operator ---*/)
    {
        printf("%d Is Even\n", x);
    }

    printf("Enter Age : ");
    int b = scanf("%d", &a), vip_person = 0;

    /*---- Logical operator ----*/
    /*
        AND operator -> &&
        OR operator -> ||
        Equal to operator -> ==
        Not Equal to operator -> !=
        NOT operator -> !
    */
    // If-else , else-if statement using a Logical Operator
    if ((b <= 70 /*--- Logical Operator -> && ---*/ && b >= 18) || !(vip_person == 1))
    {
        printf("You are above 18 and 70 ,you can drive....\n");
    }
    else
    {
        printf("You cannot drive.......\n");
    }

    /*--- Ternary Statement ---*/
    (b == 10) ? printf("You are kid\n") : printf("You are not Kid\n");

    /* Switch Statement */
    printf("Enter Rating : ");
    int rating;
    rating = scanf("%d",&rating);
    switch (rating)
    {
    case 1:
        printf("Your Rating is 1");
        break;
    case 2:
        printf("Your Rating is 2");
        break;
    case 3:
        printf("Your Rating is 3");
        break;
    case 4:
        printf("Your Rating is 4");
        break;
    case 5:
        printf("Your Rating is 5");
        break;
    default:
        printf("Invalid rating");
        break;
    }
    system("pause");
}