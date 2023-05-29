#include <string>
#include <fstream>

int main(char argc, int *argv[])
{
	std::ifstream input("input.txt");
	std::ofstream output("output.txt");

	
	for(std::string line;std::getline(input, line);)
	{
		if(line.empty())
		{
		}
		else 
		{
			output << line << "\n";

		}

	}
}