#include <stdio.h>
int fibonacci(int x);
int main()
{
    int a, b;
    printf("Input the number of terms : ");
    scanf("%d", &a);

    printf("%d", fibonacci(a));
}
int fibonacci(int x)
{
    if (x == 0)
    {
        printf("%d ", x);
        return 0;
    }

    if (x == 1)
    {
        printf("%d ", x);
        return 1;
    }

    else
    {

        printf("%d ", x);
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}