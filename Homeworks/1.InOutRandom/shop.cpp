    #include <iostream>

    int main()
    {
    int godz;
    int min;
    std::cin >> godz >> min;
    std::cout << std::boolalpha;
    std::cout << ((godz == 10 && min >= 30) || (godz > 10 && godz < 18) || (godz == 18 && min < 30));
    }