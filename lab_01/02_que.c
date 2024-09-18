#include <stdio.h>

int main()
{
    // declaring
    int M;
    int N;
    int temp;

    // scanning the value of M
    printf("enter the value of M =");
    scanf("%d", &M);

    // scanning the value of N
    printf("enter the value of N =");
    scanf("%d", &N);

    // swapping the values of M and N
    temp = M;
    M = N;
    N = temp;

    // printing the swapped values
    printf("after swapping M = %d, N = %d\n", M, N);

    return 0;

    // completed
}
