#include <iostream>

int main()
{
        double n;
		double min;
		if(std::cin >> n) {
				min = n;
				while (std::cin >> n) {
						if (n < min) {
								min = n;
						}
				}
				std::cout << min;
}
}