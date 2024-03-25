#include <iostream>
#include <string_view>

void print_in_console(std::string_view str) // meilleure par valeur que par réf
{
    std::cout << str << std::endl;
}

int main()
{
    print_in_console("print me");
    return 0;
}
