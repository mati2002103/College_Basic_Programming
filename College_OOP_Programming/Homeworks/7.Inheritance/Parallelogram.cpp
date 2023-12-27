#include <iostream>

class Parallelogram{
    private:
    double sideA,sideB,height;
    public:
        Parallelogram(double sideA,double sideB,double height);
        virtual double area() const;
        virtual double perimeter() const;
        double getSideA()const{return sideA;};
        double getSideB()const{return sideB;};
        double getHeight()const{return height;};




};
Parallelogram::Parallelogram(double sideA,double sideB,double height) : sideA(sideA),sideB(sideB),height(height){};
 double Parallelogram::area() const{
     return (double)sideA*height;
 }
double Parallelogram::perimeter() const{
    return double(2*sideB + 2*sideA);
};
class Rectangle : public Parallelogram{
    private:
    public:
    Rectangle(double sideA,double sideB) : Parallelogram(sideA,sideB,0){};
    double area() const override;
};
double Rectangle::area()const {
    return getSideA()*getSideB();
    };
class Square : public Rectangle{
    private:
    public:
    Square(double sideA) : Rectangle(sideA,0){}; 
    double area() const override;
    double perimeter() const override;

};
double Square::area()const{
    return getSideA()*getSideA();
};
double Square::perimeter()const {
    return 4*getSideA();
}


int main() {
Parallelogram *rect = new Rectangle(4, 5);
std::cout << rect->area() << " " << rect->perimeter() << std::endl;

delete rect;

Rectangle *square = new Square(6);
std::cout << square->area() << " " << square->perimeter() << std::endl;
delete square;

return 0;
}
