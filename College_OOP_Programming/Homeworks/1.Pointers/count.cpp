#include <iostream>

int count(const int *b,const int *e, int number)
{
    int counter=0;
    for(;b<=e;++b)
    {
        if(*b==number)
        {
            ++counter;
        }
    }
    return counter;

}

int main() {
    const int table[] = {-1, 7, -1, 12, -5, -1, 10};
    int result = count(table, table + 7, 2);
    std::cout << result << std::endl;
return 0;
}

