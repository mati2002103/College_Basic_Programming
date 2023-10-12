#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

int main()
{
    std::ifstream input("dict.txt");
    std::map<std::string, std::string> dict;
    for(std::string key, value;input >> key >> value;)
    {
        dict[key] = value;
    }
    input.close();

   for(std::string key;
   std::getline(std::cin, key) && std::istringstream(key) >> key;
   )
   {
    std::map<std::string, std::string>::iterator i = dict.find(key);
    if(i != dict.end())
    {
        std::cout<<i->second<<std::endl;
    }    
    else{
        std::string value;
        if(std::getline(std::cin, value) && std::istringstream(value) >> value){
        dict[key] = value;
        }
    }
   }
    std::ofstream output("dict.txt");
    for(std::pair<std::string, std::string>p:dict)
    {
        output << p.first << " " << p.second <<  std::endl;
    }
    output.close();

}