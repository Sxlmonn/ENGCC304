#include <stdio.h>

int main()
{
    int score;

    printf("Enter raw score: ");
    scanf("%d", &score);

    if (score < 50)
    {
        printf("Grade = F\n");
    }
    else if (score >= 50 && score < 55)
    {
        printf("Grade = D\n");
    }
    else if (score >= 55 && score < 60)
    {
        printf("Grade = D+\n");
    }
    else if (score >= 60 && score < 65)
    {
        printf("Grade = C\n");
    }
    else if (score >= 65 && score < 70)
    {
        printf("Grade = C+\n");
    }
    else if (score >= 70 && score < 75)
    {
        printf("Grade = B\n");
    }
    else if (score >= 75 && score < 80)
    {
        printf("Grade = B+\n");
    }
    else if (score >= 80)
    {
        printf("Grade = A\n");
    }

    return 0;
}
