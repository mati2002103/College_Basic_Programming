#include <fstream>
#include <string>
int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);
    for (std::string line; std::getline(input, line); output << line << std::endl)
    {
        int index = line.find_last_not_of(" \t");
        line.erase(index == std::string::npos ? 0 : index + 1);
    }
    output.close();
    input.close();
}