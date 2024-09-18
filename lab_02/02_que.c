#include <stdio.h>

int main()
{

    // declaring the variables
    int a, b, c;

    // asking the input
    printf("enter the first number = ");
    scanf("%d", &a);

    printf("enter the second nnumber = ");
    scanf("%d", &b);

    printf("enter the third number = ");
    scanf("%d", &c);

    printf(" ");

    // finding the smallest number
    if (a < b && a < c)
    {
        printf("the smallest number is =%d\n", a);
    }

    if (b < a && b < c)
    {
        printf("the smallest number is =%d\n", b);
    }

    if (c < a && c < b)
    {
        printf("the smallest number is =%d\n", c);
    }

    // finding the largest number
    if (a > b && a > c)
    {
        printf("the lagest number is =%d", a);
    }

    if (b > a && b > c)
    {
        printf("the largest number is =%d", b);
    }

    if (c > a && c > b)
    {
        printf("the largest number is =%d", c);
    }

    return 0;

    // completed
}