#include <iostream>
#include <vector>
#include <functional>

/*
bool less(int i1,int i2)
{
    return i1<i2;
}

bool greater(int i1, int i2)
{
return i1 > i2;
}

bool modulo2(int i1,int i2)
{
  return i1 %2 == 0 && i2 %2 == 0 ||
         i1 %2 == 0 && i2 %2 == 1 ||
         i1 %2 == 1 && i2 %2 == 1 && i1 <= i2 ;
}
*/


void selection_sort(std::vector<int>::iterator b,
                    std::vector<int>::iterator e,
                    std::function<bool(int, int)> compare = [](int i1,int i2) {return i1<i2;} ) {
    while (b < e) {
        auto m = b;
        for (auto i = b; ++i < e;) 
        {
            if (compare(*i,*m)) {
                m = i; }}


        std::iter_swap(b++, m);

        }}


int main() {
    std::vector<int> v {21, 10, 13, 5, 2, 5, 7, 8};
    selection_sort(v.begin(), v.end());
    for (auto i = v.cbegin(); i < v.cend(); ++i) {
        std::cout << *i << " "; }
    std::cout << std::endl; 
    
     selection_sort(v.begin(), v.end(),[](int i1,int i2){return i1>i2;});
    for (auto i = v.cbegin(); i < v.cend(); ++i) {
        std::cout << *i << " "; }
    std::cout << std::endl;

    /* selection_sort(v.begin(), v.end(),modulo2);
    for (auto i = v.cbegin(); i < v.cend(); ++i) {
        std::cout << *i << " "; }
    std::cout << std::endl;
    */
    }
