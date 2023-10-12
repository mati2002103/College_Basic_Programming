#include <cctype>
#include <string>
#include <iostream>
std::string initials(const std::string &fullName)
{
	std::string initials;
	if(fullName.empty()){
		return initials;

	}
	if (isalpha(fullName[0])) 
	{
		initials += fullName[0];
	}
	for (int i = 1; i <= fullName.length(); i++)
	{

		if (isalpha(fullName[i]) && isspace(fullName[i - 1]))
		{
			initials += fullName[i];
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

