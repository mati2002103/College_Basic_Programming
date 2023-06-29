#include <fstream>
#include <string>
int main(int argc, char *argv[])
{
    std::string source = argv[1], target = argv[2];
    std::ifstream input(argv[3]);
    std::ofstream output(argv[4]);
    for (std::string line; std::getline(input, line);)
    {
        for (int index = 0;
             (index = line.find(source, index)) != std::string::npos;
             index += target.size())
        {
            line.replace(index, source.size(), target);
        }
        output << line << std::endl;
    }
    output.close();
    input.close();
}
