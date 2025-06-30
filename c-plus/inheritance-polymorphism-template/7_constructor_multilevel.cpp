#include <iostream>
using namespace std;

class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent Constructor called." << endl;
    }
};

class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent Constructor called." << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child Constructor called." << endl;
    }
};

int main() {
    cout << "Creating Child object...\n";
    Child obj;

}