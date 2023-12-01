#include <iostream>

class Object{
    private:
    static int counter;
    public:
    Object();
    static int count();
};
    int Object::count(){
        return counter;
    }

    Object::Object(){
        ++counter;
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
