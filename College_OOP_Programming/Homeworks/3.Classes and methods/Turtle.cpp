#include <iostream>
#include <cmath>

class Turtle{
    private:
    double X=0;
    double Y=0;
    double angle = 0; 
    public:
   
    double x() const;
    double y() const;
    Turtle& go(double shift);
    Turtle& turn(double shift_angle);
    protected:

};

double Turtle::x() const{
    return this->X;
}
double Turtle::y() const{
    return this->Y;
}
Turtle& Turtle::turn(double shift_angle){
    this->angle += shift_angle;
    return *this;
}

Turtle& Turtle::go(double shift){
    X += shift * cos(angle * 3.14 / 180.0);
    Y += shift * sin(angle * 3.14 / 180.0);
        return *this;

}


int main() 
{
    Turtle turtle;
    turtle.turn(30.).go(100.);
    std::cout << turtle.x() << " " << turtle.y() << std::endl;
    return 0;
}



