#include <stdio.h>

int main()
{
    int N;
    printf("Enter raw score: ");
    scanf("%d", &N);

    if (N % 2 == 1)
    {
        printf("%d:\n", N);
        for (int i = 1; i <= N; i += 2)
        {
            printf("%d ", i);
        }//end for
    }//end if
    else
    {
        printf("%d:\n", N);
        for (int i = N; i >= 0; i -= 2)
        {
            printf("%d ", i);
        }//end for
    }//end else
}
