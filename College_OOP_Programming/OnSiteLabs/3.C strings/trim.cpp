#include <iostream>
#include <cctype>
#include <string.h>

void trim(char* tab)
{
    int len=strlen(tab);

    for(int i =len;i>=0;i--)
    {
        if(isspace((int)tab))
        {
            tab = '\0';
        }
    }   
    
}

int main() {
    char tab[16];
    std::cin.getline(tab, 16);
    trim(tab);
    for (int i = 0; i < sizeof(tab); ++i) {
    std::cout << (int)tab[i] << " ";
    }
    std::cout << std::endl;
return 0;
}