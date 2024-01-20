#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::string line;
    // std::vector<std::string> lines;
    std::getline(std::cin, line);
    std::stringstream lines;

    while (!line.empty())
    {
        // lines.push_back(line);
        lines << "Craow " << line << std::endl;
        std::getline(std::cin, line);
    }

    /*for (auto l : lines)
    {
        std::cout << "Craow " << l << std::endl;
    }*/
    std::cout << lines.str();

    return 0;
}
