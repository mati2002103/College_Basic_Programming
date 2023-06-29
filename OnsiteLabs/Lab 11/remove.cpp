#include <iostream>
#include <vector>

std::vector<int>::iterator remove(std::vector<int> &v)
    {

auto b = v.begin();
    for (auto i = v.cbegin(); i < v.cend(); ++i) { 
         if(*i != 2)
        {
            *b++ = *i;    
        }}
        return b;
    }



int main() {
    std::vector<int> v {-7, 5, 2, 2, 11, 2, 3};

        

        v.erase(remove(v), v.end());
    for (auto i = v.cbegin(); i < v.cend(); ++i) {
        std::cout << *i << " ";
        }
    std::cout << std::endl; 
    
    }
