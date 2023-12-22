#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <iostream>
#include <string>

class Figure {
  public:
  Figure(std::string color);
  std::string getColor()const ;
  std::ostream& print(std::ostream &os)const;

  private:
  std::string color;
    

};

class Circle:public Figure{
    public:
    Circle(std::string color,int r) : Figure(color), r(r){};

    double getArea()const ;
    double getRadius()const ;
    std::ostream& print(std::ostream &os)const;



    private:
    int r=0;

    

};
class Rectangle:public Figure{
  public:
  Rectangle(std::string color, int width, int height) : Figure(color), width(width), height(height){};
    double getArea()const ;
    double getWidth()const ;
    double getHeight()const;

    std::ostream& print(std::ostream &os)const;


   

  private:
  int width;
  int height;
    

};


#endif //_STACK_HPP_
