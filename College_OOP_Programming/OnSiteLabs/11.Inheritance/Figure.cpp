#include "Figure.hpp"
#include <string>

Figure::Figure(std::string color){this->color = color;};

std::string Figure::getColor()const{
    return this->color;
};
std::ostream& Figure::print(std::ostream &os)const{
    os << this->color;
    return os;
};



double Circle::getArea()const{return r*r*3.14;};
double Circle::getRadius()const{return r;};

std::ostream& Circle::print(std::ostream &os)const{
    os << getColor() << " " << getRadius() << " " << getArea();
    return os;
};


double Rectangle::getArea()const{return width*height;};
double Rectangle::getWidth()const{return width;};
double Rectangle::getHeight()const{return width;};


std::ostream& Rectangle::print(std::ostream &os)const{
    os << getColor() << " " << getHeight() << " " << getWidth() << " " << getArea();
    return os;
};







