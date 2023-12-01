#include <iostream>
#include <cstdlib>
#include <cstring>

class Histogram{
    private:
        double *columns;

    public:
};



std::ostream &operator <<(std::ostream &s, const Histogram &h) {
for (int i = 0; i < h.size();) {
s << h[i++] << " ";
}
return s;
}
int main() {
Histogram h1(0., 1., 2);
Histogram h2;
h1.insert(0.17);
(h2 = h1).insert(0.75);
const Histogram h3 = Histogram(h2).insert(0.33);
std::cout << h1 << std::endl << h2 << std::endl <<
h3 << std::endl;
return 0;
}
