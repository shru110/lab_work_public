#include <stdio.h>

int main()
{
    // declaring variables
    int x;
    int temp;

    // ask for input
    printf("Temperature of city in Fahrenheit =");
    scanf("%d", &x);

    // formula for temp
    temp = (x - 32) * 5 / 9;

    // printing the result
    printf("temperature in celcius = %d\n", temp);

    return 0;

    // completed
}
