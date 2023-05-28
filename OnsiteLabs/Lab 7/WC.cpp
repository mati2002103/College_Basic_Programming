#include <cctype>
#include <fstream>
#include <iostream>
int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);
    int lines = 0, words = 0, characters = 0;
    for (char previous = '\n', current; input.get(current); previous = current)
    {
        if (previous == '\n')
        {
            ++lines;
        }
        if (std::isspace(previous) && !std::isspace(current))
        {
            ++words;
        }
        ++characters;
    }
    input.close();
    std::cout << lines << " " << words << " " << characters << std::endl;
}
