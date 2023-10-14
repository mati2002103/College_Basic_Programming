#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    int inputNumber = atoi(argv[1]);

    for(int i=2;i<=inputNumber;++i)
    {
        
     if (i == 2 || i == 3 || i == 5 || i == 7)
    {
        std::cout << i << " ";
    }
    else if ((i % 2) != 0 && (i % 3) != 0 && (i % 5) != 0 && (i % 7) != 0)
    {
        std::cout << i << " ";
    }
    }
    


}