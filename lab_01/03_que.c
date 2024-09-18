#include <stdio.h>

int main()
{

    // declareing variables
    int x;
    int DA;
    int HRA;
    int gross_salary;

    // asking input and scanning it
    printf("Ramesh's basic salary:$");
    scanf("%d", &x);

    // calcullatinng the allowances
    DA = 0.4 * x;
    HRA = 0.2 * x;

    // calculating the gross salary and printing it
    gross_salary = DA + HRA + x;
    printf("Ramesh's gross salary =$%d\n", gross_salary);

    return 0;

    // completed
}
