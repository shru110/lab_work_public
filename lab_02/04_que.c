#include <stdio.h>

int main()
{

    // declaring variables
    int a, b, c;

    // accepting the values of sides of triangle
    printf("enter the first side of triangle =");
    scanf("%d", &a);

    printf("enter the second side of triangle =");
    scanf("%d", &b);

    printf("enter the third value of triangle =");
    scanf("%d", &c);

    // condition for triangle to be valid
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid");
    }

    return 0;

    // completed
}