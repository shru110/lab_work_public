// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    printf("Hello User\n");
    // declare
    int x;
    int y;
    int sum;

    // real values of x and y from standard inputs
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter the value for y: ");
    scanf("%d", &y);

    sum = x + y;

    // print
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x + y = %d\n", sum);

    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, (x - y));
    printf("%d * %d = %d\n", x, y, (x * y));
    printf("%d / %d = %d\n", x, y, (x / y));
    printf("%d %% %d = %d\n", x, y, (x % y));

    return 0;
    // completed
}
