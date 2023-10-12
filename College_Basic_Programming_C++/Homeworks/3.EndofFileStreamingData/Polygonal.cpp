#include <iostream>

int main()
 {
    double sum, x1, y1,x2,y2;
	if (std::cin >> x1 >> y1) {
		        sum = 0;
		        while (std::cin >> x2 >> y2)
		        {
			                sum += std::sqrt((pow((x2 - x1), 2.) + pow((y2 - y1), 2.)));
			                x1 = x2;
			                y1 = y2;
		        }
		        std::cout << sum;
}
}