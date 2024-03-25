#include <iostream>
#include <string>
#include <tuple>

std::tuple<bool, int, int> parse_params(int argc, const char* const* argv)
{
    const std::tuple<bool, int, int> error { false, 0, 0 };
    if (argc != 3)
    {
        std::cerr << "Program expects 2 parameters!" << std::endl;
        return error;
    }

    std::string num_str = argv[1];
    std::string den_str = argv[2];

    int numerator   = 0;
    int denominator = 0;

    try
    {
        numerator   = std::stoi(num_str);
        denominator = std::stoi(den_str);
    }
    catch (const std::exception&)
    {
        std::cerr << "Program expects 2 integer parameters!" << std::endl;
        return error;
    }

    if (denominator == 0)
    {
        std::cerr << "Denominator cannot be null!" << std::endl;
        return error;
    }

    return std::tuple { true, numerator, denominator };
}

std::tuple<int, int> divide(int numerator, int denominator)
{
    return std::tuple { numerator / denominator, numerator % denominator };
}

int main(int argc, char** argv)
{
    const auto res = parse_params(argc, argv);

    if (!std::get<0>(res))
    {
        return 1;
    }

    const int  numerator   = std::get<1>(res);
    const int  denominator = std::get<2>(res);
    const auto div         = divide(numerator, denominator);
    const int  quotient    = std::get<0>(div);
    const int  reminder    = std::get<1>(div);
    std::cout << numerator << " = " << denominator << " * " << quotient << " + " << reminder << std::endl;

    return 0;
}