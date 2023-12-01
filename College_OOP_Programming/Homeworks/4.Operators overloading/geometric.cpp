#include <iostream>
#include <cmath>

class Geometric{
    private:
    int a;
    double q;
    public:
    Geometric(int a, double q);
    double operator[](int index) const;

};
Geometric::Geometric(int a, double q) : a(a), q(q){};
double Geometric::operator[](int index) const{
    return this->a*std::pow(this->q,index);
};



int main() {
    const Geometric geometric(1., 0.5);
    std::cout << geometric[2] << std::endl;
    return 0;
}