#include <stdio.h>

int main()
{
    // declaring variable x
    int x;

    // scanning the given input
    printf("Give the input = ");
    scanf("%d", &x);

    // writing the if else condition to check if the number is odd or even
    if (x % 2 == 0)
    {
        printf("the given number is EVEN");
    }
    else
    {
        printf("the given number is ODD");
    }

    return 0;

    // completed
}