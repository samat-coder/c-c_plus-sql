#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

 
    Base() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }


    void displayPrivateVar() {
        cout << "Private Variable (accessible only within Base): " << privateVar << endl;
    }
};

class Derived : public Base {
public:
    void displayAccess() {
        // privateVar is not accessible here because it's private in Base class

        // protectedVar is accessible here because it's protected in Base class
        cout << "Protected Variable (accessible in Derived): " << protectedVar << endl;

        // publicVar is accessible here because it's public in Base class
        cout << "Public Variable (accessible in Derived): " << publicVar << endl;
    }
};

int main() {
    Derived obj;

    // Accessing members from the derived object
    cout << "Accessing from Derived class object:\n";
    obj.displayAccess();

    // Access to publicVar is allowed directly because it's public in Base
    cout << "Accessing Public Variable from Derived object: " << obj.publicVar << endl;

    // Access to protectedVar and privateVar from main is not allowed
    // cout << obj.protectedVar;  //  display error
    // cout << obj.privateVar;    //  display error

    // Accessing private variable through a public method of Base class
    cout << "\nAccessing Private Variable via Base class method:\n";
    obj.displayPrivateVar();
 
}