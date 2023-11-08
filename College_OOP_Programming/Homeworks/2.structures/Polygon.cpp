#include <iostream>
#include <cmath>

double Pi=4.*std::atan(1.);

struct Polygon{
    int numAngles;
    float sideLength;
};
double area(const Polygon  *polygon){
    
    double apothem = polygon->sideLength / (2.0 * tan(Pi / polygon->numAngles));
    double area = 0.5 * polygon->numAngles * polygon->sideLength * apothem;
    return area;
}
Polygon scaled(const Polygon *polygon, double uniformity)
{
    Polygon scaledPolygon = *polygon;
    scaledPolygon.sideLength *= uniformity;
    return scaledPolygon;
}
void scale(Polygon *polygon, double uniformity)
{
     polygon->sideLength *= uniformity;
}




int main(){
    const Polygon polygon1 = {7, 10.};
    std::cout << area(&polygon1) << std::endl; 
    
    Polygon polygon2 = scaled(&polygon1, 2.);
    std::cout << area(&polygon2) << std::endl;
    
    scale(&polygon2, 2.);
    std::cout << area(&polygon2) << std::endl;
    
    return 0;


}



