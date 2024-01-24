#include <iostream>
#include <vector>
#include <list>

template<class InputIt, class UnaryPredicate>
InputIt find_ifi(InputIt first, InputIt last, UnaryPredicate p)
{
    for (; first != last; ++first)
        if (p(*first))
            return first;
 
    return last;
}


int a1;
bool less(int n) { return n < a1; }
struct Less {
 Less (int a): a(a) {}
 bool operator ()(int n) const {return n < a; }
 private:
 int a;
};

int main() {
 std::vector< int> c {1, 5, -3, 6, 5, 2, 4};
 int a2, a3;
 std::cin >> a1 >> a2 >> a3;
 auto i1 = find_ifi(c.begin(), c.end(), less);
 std::cout << std::distance (c.begin(), i1) << std::endl;
 auto i2 = find_ifi(c.begin(), c.end(), Less(a2));
 std::cout << std::distance (c.begin(), i2) << std::endl;
 auto i3 = find_ifi(c.begin(), c.end(), [a3]( int n) {return n < a3; });
 std::cout << std::distance (c.begin(), i3) << std::endl;
}