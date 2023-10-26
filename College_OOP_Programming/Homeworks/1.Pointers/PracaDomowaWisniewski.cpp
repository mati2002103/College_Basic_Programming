#include <cstdlib>
#include <iostream>

//funkcja count z zadania podpisane grupowo
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




//W funkcji main jest zadanie erastotenes podpisane indywidualnie
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
    
    //wywołanie funkcji count z zadania podpisane grupowo
    const int table[] = {-1, 7, -1, 12, -5, -1, 10};
    int result = count(table, table + 7, -1);
    std::cout << result << std::endl;


}