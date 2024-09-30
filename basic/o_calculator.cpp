#include <bits/stdc++.h>
using namespace std;

int main()
{
    string expression;
    cin >> expression;

    int A = 0, B = 0;
    char op;
    int i = 0;

    while (isdigit(expression[i]))
    {
        A = A * 10 + (expression[i] - '0');
        i++;
    }

    op = expression[i];
    i++;

    while (i < expression.size() && isdigit(expression[i]))
    {
        B = B * 10 + (expression[i] - '0');
        i++;
    }

    if (op == '+')
    {
        cout << A + B << endl;
    }
    else if (op == '-')
    {
        cout << A - B << endl;
    }
    else if (op == '*')
    {
        cout << A * B << endl;
    }
    else if (op == '/')
    {
        cout << A / B << endl;
    }

    return 0;
}
