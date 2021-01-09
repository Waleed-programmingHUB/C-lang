#include <stdio.h>

// struct-typedef
typedef struct Date
{
    int date, month, year;
} ddate;

// finction prototype
void show_date(ddate d);
int check_date(ddate d1, ddate d2);

void main()
{
    ddate mydate_1 = {6, 1, 2021};
    ddate mydate_2 = {8, 1, 2020};
    printf("\n\t--- Date Structure in C lang ---\n\n");
    // function call
    // print function
    show_date(mydate_1);
    show_date(mydate_2);
    // show comparsion function
    int __date = check_date(mydate_1, mydate_2);
    printf("Date Comparsion function returns : %d\n", __date);
    system("pause");
}
// function defination
void show_date(ddate d)
{
    printf("The Date is: %d / %d / %d\n", d.date, d.month, d.year);
}
// function defination
int check_date(ddate d1, ddate d2)
{
    // Comparsion of Year
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    // Comparsion of Month
    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }
    // Comparsion of Date
    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date < d2.date)
    {
        return -1;
    }
    // then retrun this value
    return 0;
}