#include <fstream>
char upper(char character)
{
    return 'a' <= character && character <= 'z' ? 'A' + character - 'a' : character;
}
int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);
    char character;
    while (input.get(character))
    {
        output << upper(character);
    }
    output.close();
    input.close();
}