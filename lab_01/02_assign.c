#include <stdio.h>

int main()
{

    // declaring variables
    int x;
    int ten;
    int fifty;
    int hund;

    // asking input and scaning it
    printf("Amount to be withdrawn =");
    scanf("%d", &x);

    // calculating the number of notes
    ten = x / 10;
    fifty = x / 50;
    hund = x / 100;

    // prinnting the results
    printf("Number of ten notes =%d\n", ten);
    printf("Number of fifty notes =%d\n", fifty);
    printf("Number of hundred notes =%d\n", hund);

    return 0;
    // completed
}
