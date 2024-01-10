#include <iostream>
#include "pair.h"

int main()
{
    Pair<int, std::string> obj(2, "Hayk");

    Pair<int, std::string> obj1 = obj;
    Pair<int, std::string> obj2;

    obj2 = obj1;

    std::cout << obj2.first << ' ' << obj2.second << std::endl;

    return 0;
}
