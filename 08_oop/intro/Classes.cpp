#include <iostream>
#include "String.h"
using namespace std;

int main () 
{
    String one = "Radiotechnika";
    String two = one + "= LOVE";
    cout << two << '\n' << two.get_length();
    return 0;
}
