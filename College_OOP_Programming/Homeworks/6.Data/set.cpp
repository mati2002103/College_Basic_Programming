#include <iostream>

class Set {
private:
    struct Node {
        int value;
        Node* left;
        Node* right;

        Node(int val) : value(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

public:
    Set() : root(nullptr) {}
    Set(const Set& other);
    ~Set();

    Set& operator=(const Set& other);

    int count(int value) const;
    Set& insert(int value);
};

Set::Set(const Set& other) : root(nullptr) {
    if (other.root) {
        root = new Node(other.root->value);
        *this = other;
    }
}

Set::~Set() {
    if (root) {
        delete root;
        root = nullptr;
    }
}

Set& Set::operator=(const Set& other) {
    if (this != &other) {
        delete root;
        root = nullptr;

        if (other.root) {
            root = new Node(other.root->value);
            if (other.root->left) root->left = new Node(*other.root->left);
            if (other.root->right) root->right = new Node(*other.root->right);
        }
    }
    return *this;
}

int Set::count(int value) const {
    const Node* current = root;
    while (current) {
        if (value == current->value) return 1;
        else if (value < current->value) current = current->left;
        else current = current->right;
    }
    return 0;
}

Set& Set::insert(int value) {
    Node** current = &root;
    while (*current) {
        if (value < (*current)->value) current = &(*current)->left;
        else if (value > (*current)->value) current = &(*current)->right;
        else return *this;  
    }
    *current = new Node(value);
    return *this;
}

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
