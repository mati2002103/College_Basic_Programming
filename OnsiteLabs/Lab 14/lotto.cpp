#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>

int main(){

    std::srand(std::time(nullptr));
    std::set<int> s;

    while(s.size()<6)
    {
        s.insert(1 + std::rand()%49);
    }
    for(std::set<int>::iterator i =s.begin();i != s.end();++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

}