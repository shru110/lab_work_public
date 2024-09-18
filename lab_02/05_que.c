#include <stdio.h>

int main()
{

    // declaring the variables
    int eng;
    int math;
    int sci;
    int sst;
    int lang;
    int avg;
    int sum;

    // asking for the marks
    printf("Marks of English of 100 =");
    scanf("%d", &eng);

    printf("Marks of Mathematics of 100 =");
    scanf("%d", &math);

    printf("Marks of Science of 100 =");
    scanf("%d", &sci);

    printf("Marks of Social Studies of 100 =");
    scanf("%d", &sst);

    printf("Marks of Language of 100 =");
    scanf("%d", &lang);

    // getting the percentage of all subjects
    sum = eng + math + sci + sst + lang;
    avg = sum / 5;

    printf("Your percentage is =%d%%\n", avg);

    // assigning Grades
    if (avg >= 90 && avg < 100)
    {
        printf("Your grade is = A");
    }

    if (avg >= 80 && avg < 90)
    {
        printf("Your grade is = B");
    }

    if (avg >= 70 && avg < 80)
    {
        printf("Your grade is = C");
    }

    if (avg >= 60 && avg < 70)
    {
        printf("Your grade is = D");
    }

    if (avg >= 40 && avg < 60)
    {
        printf("Your grade is = E");
    }

    if (avg < 40)
    {
        printf("Fail");
    }

    if (avg > 100)
    {
        printf("Invalid Marks");
    }

    return 0;

    // completed
}