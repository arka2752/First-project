#include <stdio.h>
int main()
{
    int a[100][100], t[100][100], s[100][100];
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("t[%d][%d] = ", i, j);
            scanf("%d", &t[i][j]);
        }
    }
    printf("Matrix A\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            s[i][j] = a[i][j] + t[i][j];
        }
    }

    printf("Summation\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}