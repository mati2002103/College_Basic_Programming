#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);
    double sum = 0.;
    for (std::string line; std::getline(input, line);)
    {
        std::string word;
        for (std::istringstream stream(line); stream >> word;)
            ;
        double price;
        if (std::istringstream(word) >> price)
        {
            sum += price;
        }
    }
    std::cout << sum << std::endl;
    input.close();
}
