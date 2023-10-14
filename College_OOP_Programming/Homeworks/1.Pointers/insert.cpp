#include <cstdlib>
#include <iostream>
#include <string>
std::string insert()
{
    
}
int main()
{
char *string = (char*)std::calloc(1, sizeof(char));
string = insert(string, 0, "diary");
string = insert(string, 2, "ction");
std::cout << string << std::endl;
std::free(string);
return 0;

    
}