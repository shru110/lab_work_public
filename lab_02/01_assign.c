#include <stdio.h>

int main()
{

    // declaring the variable
    int y;

    // asking for the input year
    printf("Enter the year =");
    scanf("%d", &y);

    // adding if else condition for the leap year
    if (y % 4 == 0 && y % 100 != 0)
    {
        printf("the year %d is a leap year", y);
    }
    else if (y % 4 == 0 && y % 100 == 0 && y % 400 == 0)
    {
        printf("the year %d is a leap year", y);
    }
    else if (y % 4 == 0 && y % 100 == 0 && y % 400 != 0)
    {
        printf("the year %d is not a leap year", y);
    }
    else
    {
        printf("the year %d is not a leap year", y);
    }

    return 0;

    // completed
}