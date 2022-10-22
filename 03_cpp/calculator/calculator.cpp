#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double a, b, c;
    char d;
    int p = 1;
    while (p != 2)
    {
        cout << ("1 - calculator\n2 - exit\n"); cin >> fam;
        scanf("%d", &p);
        if (p != 1) break;
        cout << ("Введите числа без пробелов: "); cin >> fam;
        scanf("%lf%c%lf", &a,&d,&b);
        while(getchar() != '\n');
        switch(d)
        {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break; // при делени на ноль идёт возврат к началу,то есть к 11 строке.
        case '^': c = a * b; break;
        default:
            cout << ("Неверно\n"); cin >> fam;
            continue;
        }
        cout << ("Результат = %lf\n", c); cin >> fam;
    }
}