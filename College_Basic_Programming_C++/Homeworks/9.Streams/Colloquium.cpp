#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
std::ifstream input("input.txt");
float maxpunkty=0;
std::vector<std::string> osoby;
std::vector<int> punkty_osob;
std::string imiona;
    for(std::string line; std::getline(input, line);)
    {
        float suma;
        
        std::string word;
        
        for (std::istringstream stream(line); stream >> suma;)
        {
            maxpunkty +=suma;
            
            
        }
        bool yes=true;
        for(std::istringstream stream(line); stream >> word;)
        {
          if(yes){
            imiona = word;
            yes=false;
          }

        }
   
            
    }

 std::cout << imiona << std::endl;
std::cout << maxpunkty << std::endl;
}