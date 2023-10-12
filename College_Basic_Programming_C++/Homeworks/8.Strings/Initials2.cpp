#include <iostream>
#include <cctype>
#include <string>


std::string initials(const std::string &word) {
    
    std::string initials;
    bool next = true;
   
    for (char c : word) {
        if (std::isalpha(c) && next) {
            initials += c;
            next = false;
        }
        else if (c == ' ') {
            next = true;
        }
    }
    return initials;
}
int main()
{
	std::string result = initials("");
	std::string result1 = initials("John Fitzgerald Kennedy \n");
	std::string result2 = initials(std::string("andy warhol"));
	std::cout <<(int)result[0] << std::endl;
	std::cout <<result1 << std::endl;
	std::cout <<result2 << std::endl;
}