#include <ctime>
#include <iostream>




int main(){

    int year, month, day;
    std::cin >> year >> month >> day;
    tm tm1;
    tm1.tm_year=year-1900;
    tm1.tm_mday =day;
    tm1.tm_mon =month-1;

    mktime(&tm1);
    
    int dayFromFirstJanuary = tm1.tm_yday +1;
    std::cout << dayFromFirstJanuary << std::endl;


}