#include <iostream>

bool compare(const char *str1,const char *str2)
{
  while (*str1 != '\0' || *str2 != '\0') {
        if (*str1 < *str2) {
            return true;
        }
        else if (*str1 > *str2)
         {
            return false;
        }
        ++str1;
        ++str2;
    }
    return false;
}

int main() {
    std::cout << std::boolalpha << compare("Tome", "Tomek");
    std::cout << std::endl;
return 0;
}
