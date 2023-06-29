#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
#include <fstream>
#include <string>
#include <sstream>


int main()
{
     std::ifstream input("piny.txt");
     std::set<int> pins;
     
    for(int pin; input >> pin;)
    {
        pins.insert(pin);
    }
    input.close();
    int pin;
    std::cin >> pin;

    if(pins.count(pin))
    {
        std::cout<<"Success" <<std::endl;
    }
    else{
        std::cout<<"Fail"<< std::endl;
    }
            

}