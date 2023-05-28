#include <iostream>
#include <cstdlib>


int main(int argc, char *argv[]) {
    float sum=0;
    if (argc > 1) {
          sum = std::atof(argv[1]);

        for (int i = 2; i < argc; ++i)
        {
            sum += std::atof(argv[i]);

        }
        
    }
    std::cout << sum;
}