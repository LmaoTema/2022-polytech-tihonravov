#include<cmath>
#include <stdio.h>
#include<iostream>
using namespace ::std;
int main()
{

    double a, b, c;
    char d;
    while (true)
    {
     
        cout << "Введите числа без пробелов: " << endl; 
        cin >> a >> c >> b;
        switch(d)
        {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break; // при делени на ноль идёт возврат к началу,то есть к 11 строке.
        case '^': c = a * b; break;
        default:
            cout << "Неверно\n" << endl;
            continue;
        }
        cout << "Результат = ", c << endl;
    }
}