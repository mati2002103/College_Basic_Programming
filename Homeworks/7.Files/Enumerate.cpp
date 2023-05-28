#include <fstream>

int main(int argc, char *argv[])
{
	std::ifstream input(argv[1]);
	std::ofstream output(argv[2]);
	bool NewLine=true;
	int i = 1;
	char c;
	
	while(input.get(c))
	{
		if (NewLine == true)
		{
			output << i << " ";
			NewLine = !NewLine;

		}
		if (c == '\n') {
			i++;
			NewLine = !NewLine;
		}	
		output << c;
	}
	input.close();
	output.close();
}
