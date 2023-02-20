#include <stdio.h>
int main()
{
    int a[100][100], t[100][100];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
