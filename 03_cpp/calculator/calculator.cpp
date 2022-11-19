#include <iostream>
#include "calc.h"
using namespace std;

int main()
{
    double a, b, result;
    char $;
    cout << "Calculator\n Введите данные а и b\n";
    while(true)
    {
        cin >> a >> $ >> b;
        result = calculate(a, $, b);
        cout << a << $ << b << "=" << result << endl;
    }
    return 0;

}