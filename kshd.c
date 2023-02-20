#include <stdio.h>
void print(int x)
{
    if (x == 0)
    {
        return;
    }

    --x;
    printf("%d\n", x);
    print(x);
    printf("%d\n", x);
}
int main()
{
    print(5);
}