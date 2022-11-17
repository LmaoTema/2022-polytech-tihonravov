#include <iostream>
#include "String.h"

int main () 
{
    String one = "Radiotechnika";
    String two = one + "= LOVE";
    std::cout << two << '\n' << two.get_length();
    return 0;
}
