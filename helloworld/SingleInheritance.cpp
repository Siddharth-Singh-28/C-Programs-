#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Display function of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Show function of Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Accessing Base class member function
    d.show();    // Accessing Derived class member function
    return 0;
}
