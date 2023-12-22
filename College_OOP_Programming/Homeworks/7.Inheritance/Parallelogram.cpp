#include <iostream>

class Parallelogram{
    private:
    double sideA,sideB,height;
    public:
        Parallelogram(double sideA,double sideB,double height);
        double area() const;
        double perimeter() const;


};
Parallelogram::Parallelogram(double sideA,double sideB,double height) : sideA(sideA),sideB(sideB),height(height){};
double Parallelogram::area() const{
    return (double)sideA/height;
}
double Parallelogram::perimeter() const{
    return double(2*sideB + 2*sideA);
};
class Rectangle : public Parallelogram{
    private:
    public:
    Rectangle(double sideA,double sideB) : Parallelogram(sideA,sideB){};

};




int main() {
Parallelogram *rect = new Rectangle(4, 5);
std::cout << rect->area() << " " << rect->perimeter() << std::endl;
/*
delete rectangle;
Rectangle *square = new Square(6);
std::cout << square->area() << " " << square->perimeter() << std::endl;
delete square;
*/
return 0;
}
