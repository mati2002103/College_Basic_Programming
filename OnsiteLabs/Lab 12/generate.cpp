#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>

void foreach2(std::vector<int>::iterator b,
               std::vector<int>::iterator e,
               std::function<void(int n)> doSomething)
               {
                while(b < e)
                       {
                       doSomething(*b++);
                       }
               }

void generate2(std::vector<int>::iterator b,
               std::vector<int>::iterator e,
               std::function<int()> number)
               {
                       while(b != e)
                       {
                        *b++ = number();
                       }
               }
int main(){
    std::vector<int> v(5);

    generate2(v.begin(), v.end(), []{return 7;});


    foreach2(v.begin(), v.end(), [](int n){std::cout << n << " "; });

    std::cout << std::endl; 
}
