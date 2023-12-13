#include <iostream>

class Object{
    private:
    static int counter;
    public:
    Object();
    Object(Object &o);
    ~Object();

    static int count();
};
int Object::counter = 0;

    int Object::count(){
        return counter;
    }

    Object::Object(){
        counter++;
    }
    Object::Object(Object &o){
           counter++;
    };
    Object::~Object(){
        counter--;
    }





int main() {
Object object1;
{
Object object2(object1);
std::cout << Object::count() << " ";
}
std::cout << Object::count() << std::endl;
return 0;
}
