#include <iostream>

int main()
{
	int x, y, z;
	for (int i = 100; i <= 999; i++) {
		
		x = i / 100;
		y = (i / 10)%10;
		z = (i % 100) % 10;
		if((x+y+z)%7==0){
			if (x == 1 || x == 2 || x == 5 || x == 6 || x == 7 || x==9) 
	              {
			if (y == 1 || y == 2 || y == 4 || y == 8) {
				if ((z % 2) == 0) {
					std::cout << i << " ";
					
			  }
			}
			}
		}
	}

}
