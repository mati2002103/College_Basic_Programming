#include <iostream>
#include <cmath>

class Geometric{
    private:
    int a;
    double q;
    public:
    Geometric(int a, double q);
    double operator[](int index){};

};
Geometric::Geometric(int a, double q) : a(a), q(q){};
double Geometric::operator[](int index){
    double wynik = this->a*std::pow(this->q,index);
    return wynik ;
};



int main() {
    const Geometric geometric(1., 0.5);
    std::cout << geometric[2] << std::endl;
    return 0;
}