#include <iostream>

double min(double L1,double L2){
    if(L1 <  L2){
        return L1;
    }
    else{
        return L2;
    }
}

class Bottle{
    private:
    double capacity;
    double filled=0;

    public:
    Bottle(double capacity);
    double volume() const;
    double fill(double to_fill);
    double pour(double to_pour);
    protected:
};
Bottle::Bottle(double capacity) : capacity(capacity){};
double Bottle::volume() const{
    return this->filled;
}
double Bottle::fill(double to_fill){
   double spaceLeft = capacity - filled;
        double actualFill = min(spaceLeft, to_fill);
        filled += actualFill;
        return actualFill;
}
double Bottle::pour(double to_pour){
    double actualPour = min(filled, to_pour);
    filled -= actualPour;
    return actualPour;
}


int main()
{ 
    Bottle bottle(4.5);
    std::cout << bottle.volume() << " ";
    
    std::cout << bottle.fill(3.5) << " ";
    std::cout << bottle.volume() << " ";
    
    std::cout << bottle.pour(5.5) << " ";
    std::cout << bottle.volume() << std::endl;
    
    return 0;
}
