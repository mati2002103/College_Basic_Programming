#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	int i = 0;
	while (i < 50) {
		std::srand(std::time(nullptr)+i);
		int dice1 = (rand() % 6 )+1;
		int dice2 = (rand() % 6)+1;
		std::cout << dice1 << " " << dice2 << " " << dice1 + dice2 << std::endl;
		i++;
	}
}