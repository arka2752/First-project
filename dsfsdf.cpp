#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char op;
    float x, y;
    cout << "Enter operator:+,-,*,/,%:  ";
    cin >> op;
    cout << "Enter two number";
    cin >> x >> y;

    switch (op)
    {

    case '+':
        cout << x << "+" << y << " = " << x + y;
        break;
    case '-':
        cout << x << "-" << y << " = " << x - y;
        break;
    case '*':
        cout << x << "*" << y << "=" << x * y;
        break;
    case '/':
        cout << x << "/" << y << "=" << x / y;
        break;
    case '%':
        cout << "x%y = " << (int)x % (int)y;
        break;

    default:
        cout << "Operator is not correct";
        break;
    }

    getch();
}