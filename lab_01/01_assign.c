#include <stdio.h>

int main()
{

    // declare
    int a;
    int digit_1;
    int digit_2;
    int digit_3;
    int digit_4;
    int digit_5;
    int sum;

    printf("write the 5 digit no. = ");
    scanf("%d", &a);

    digit_1 = a % 10;
    digit_2 = (a / 10) % 10;
    digit_3 = (a / 100) % 10;
    digit_4 = (a / 1000) % 10;
    digit_5 = (a / 10000) % 10;

    sum = digit_1 + digit_2 + digit_3 + digit_4 + digit_5;

    // sum = a%10 + (a*0.1)%10 + (a*0.01)%10 + (a*0.001)%10 + (a*0.0001)%10 ;

    printf("sum = %d\n", sum);

    return 0;

    // commpleted
}
