#include <stdio.h>
#include <math.h>

int main()
{

    // declaring variables
    float a, b, c;
    float ans_1, ans_2;
    float part_1, part_2;

    // asking the input and scaning it
    printf("Enter the coefficents of the general form of quadratic equation\na =");
    scanf("%f", &a);

    printf("b =");
    scanf("%f", &b);

    printf("c =");
    scanf("%f", &c);

    // defining the squaring function
    part_1 = (pow(b, 2) - 4 * a * c);
    part_2 = sqrt(part_1);

    // using the quadratic formula
    ans_1 = (-b + part_2) / 2 * a;
    ans_2 = (-b - part_2) / 2 * a;

    // differtiating the non-real roots of quafratic equation
    if (part_1 < 0)
    {
        printf("This quadratic equation has non-real roots");
    }
    else
    {
        printf("The first root is =%f\n", ans_1);
        printf("The second root is =%f", ans_2);
    }

    return 0;

    // completed
}