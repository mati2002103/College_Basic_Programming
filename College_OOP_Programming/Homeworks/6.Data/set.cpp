#include <iostream>

class Set{
    private:
    struct Node {
        int value;
        Node* left=nullptr;
        Node* right=nullptr;
    };
    Node top* = nullptr;
    public:
    Set();
    ~Set();
    Set(const Set &S);
    Set& operator=(const Set &S);
    int count(int value) const;
    Set& insert(int value);
};
Set& Set::insert(int value){
    Node temp* = new Node();
    temp->value = value;
    if(top == nulltpr){
        top = temp;
    }
    else{
        Node* newNode = top;
        while(newNode != nullptr){
            if(value < newNode->value){
                if(newNode  )
            }
        }        
    }
};





int main() {
Set set1, set2;
set1.insert(1);
(set2 = set1).insert(1).insert(3);
const Set set3 = Set(set2).insert(4);
for (int key = 0; key < 5; ++key) {
std::cout << set1.count(key) << " ";
}
std::cout << std::endl;
for (int key = 0; key < 5; ++key) {
std::cout << set2.count(key) << " ";
}
std::cout << std::endl;
for (int key = 0; key < 5; ++key) {
std::cout << set3.count(key) << " ";
}
std::cout << std::endl;
return 0;
}
