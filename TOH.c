#include <stdio.h>
void x(int a, char s, char h, char e)
{
    if (a > 0)
    {
        x(a - 1, s, e, h);
        printf("%c to %c\n", s, h);
        x(a - 1, h, e, s);
    }
}

int main()
{
    int a;
    printf("Enter Disk number = ");
    scanf("%d", &a);

    char s, h, e;
    x(a, 'A', 'B', 'C');
}