#include <iostream>


class Vector{
    private:
        double x;
        double y;

    public:
        Vector(double x, double y);
         Vector operator-(const Vector &v1)
        {
            return Vector(this->x-v1.x, this->y-v1.y);   
        }

        Vector& operator-=(const Vector &v1)
        {
             this->x -= v1.x;
             this->y -= v1.y;
             return *this;
        }
            
        friend Vector operator+(const Vector &v1, const Vector &v2);
        friend Vector& operator+=( Vector &v1,const Vector &v2);

 
        friend std::ostream& operator<<(std::ostream& os, const Vector &v);


};

Vector::Vector(double x, double y) : x(x), y(y){};

Vector operator+(const Vector &v1,const Vector &v2)
{
    return Vector(v1.x+v2.x, v1.y+v2.y);   
};


std::ostream& operator<<(std::ostream& os, const Vector &v)
{
    os << v.x << " " << v.y;

}
         
Vector& operator+=(Vector &v1,const Vector &v2){
    v1.x += v2.x;
    v1.y += v2.y;
    return v1;
    };





int main() {
    std::cout << Vector(3.5, -8.3) + Vector(0.5, 0.3)
    << std::endl;
    std::cout << Vector(3.5, -8.3) - Vector(0.5, 0.3)
    << std::endl;

    Vector vector1(10, 10);
    Vector vector2(1, 1);
    (vector1 += vector2) += Vector(0.1, 0.1);
    std::cout << vector1 << " " << vector2 <<
    std::endl;

    (vector1 -= vector2) -= Vector(0.1, 0.1);
    std::cout << vector1 << " " << vector2 <<
    std::endl;

 return 0;
}