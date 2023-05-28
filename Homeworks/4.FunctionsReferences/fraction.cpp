#include <iostream>
#include <cmath>

void fraction(double &integral, double &fractional, double number)
{
	integral = (int)number;
	fractional = number - integral;
}

int main() {
	double integral, fractional;
	fraction(integral, fractional, 2.1422353426);
	std::cout << integral << " " << fractional << std::endl;

}



