#include <cctype>
#include <string>
#include <iostream>
std::string initials(const std::string &fullName)
{
	std::string initials;
	initials += fullName[0];
	for(int i=1;i<=fullName.length();i++)
	{
		
		if (isalpha(fullName[i]) && isspace(fullName[i-1]))
		{
			initials += fullName[i];
		}
		
	}

	return initials;
}
int main() 
{
std::cout << initials("John Fitzgerald Kennedy") << std::endl;
std::cout << initials(std::string("andy warhol")) << std::endl;
 }