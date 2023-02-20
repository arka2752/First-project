#include <stdio.h>
int main()
{
    double a[12][12];
    int i, j;
    int ind;
    char b;
    scanf("%d", &ind);
    scanf("%s", &b);
    double str = 0.0;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {

            scanf("%lf", &a[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        str = str + a[i][ind];
    }
    if (b == 'S')
    {
        printf("%.1lf\n", str);
    }
    else
    {

        printf("%.1lf\n", str / (float)12);
    }
}