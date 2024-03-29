#include <cmath>
#include <iostream>
#include <vector>

constexpr double pi = 3.14;

class Figure {
  public:
    Figure(const std::string &color): color(color) {}
    const std::string &getColor() const { return color; }

    virtual std::ostream &print(std::ostream &stream) const {
      return stream  << color;
    }

    virtual double getArea() const = 0;

  private:
    std::string color;
};

class Circle: public Figure {
  public:
    Circle(const std::string &color, double radius): Figure(color), radius(radius) {}

    double getArea() const { return pi * radius * radius; }

    double getRadius() const { return radius; }

    std::ostream &print(std::ostream &stream) const {
      return stream << "Circle " << getColor() << " " << radius;
    }


  private:
    double radius;
};

class Rectangle: public Figure {
  public:
    Rectangle(const std::string &color, double width, double height):
      Figure(color), width(width), height(height) {}

    double getArea() const { return width * height; }

    double getWidth() const { return width; }

    double getHeight() const { return height; }

    std::ostream &print(std::ostream &stream) const {
      return stream << "Rectangle " << getColor() << " " << width << " " << height;
    }

  private:
    double width, height;
};

std::ostream &operator<<(std::ostream &os, const Figure &F) {
  return F.print(os);
}

Figure *scan(std::istream &is) {
  std::string type;
  is >> type;

  std::string color; 
  if (type == "Rectangle") {
    double width, height;
      
    is >> color >> width >> height;
    return new Rectangle(color,width, height);
  } else if (type == "Circle") {
    double radius;

    is >> color >>radius;
    return new Circle(color ,radius);
  } else {
    return nullptr;
  }
}

int main() {
  std::vector<Figure *> figures;
  while (Figure *figure = scan(std::cin)) {
    figures.push_back(figure);
  }

  for (const Figure *figure: figures) {
    std::cout << *figure << " " << figure->getArea() << std::endl;
  }

  for (Figure *figure: figures) {
    delete figure;
  }

  return 0;
}