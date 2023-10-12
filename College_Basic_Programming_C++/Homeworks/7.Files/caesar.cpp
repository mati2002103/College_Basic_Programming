#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	int shift = atoi(argv[1]);
	std::ifstream input(argv[2]);
	std::ofstream output(argv[3]);
	char c;
	while (input.get(c))
	{
		if (c >= 'a' && c <= 'z')
		{
			if (c + shift > 'z')
			{
				c = 'a' + ((c + shift) % 122)-1;
			}
			else if ((c + shift) < 'a')
			{
				c = 'z' + ((c + shift) - 97)+1;
			}
			else
			{
				c = c + shift;
			}
		}
		else if (c >= 'A' && c <= 'Z')
		{
			if ((c + shift) > 'Z')
			{
				c = 'A' + ((c + shift) % 90)-1;
			}
			else if ((c + shift) < 'A')
			{
				c = 'Z' + ((c + shift) - 65)+1;
			}
			else
			{
				c = c + shift;
			}
		}

		output << (char)c;
	}
	input.close();
	output.close();
}