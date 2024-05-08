#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Display function of Base class" << endl;
    }

    void show(int x) {
        cout << "Base class: " << x << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display function of Derived class" << endl;
    }

    void show(double y) {
        cout << "Derived class: " << y << endl;
    }
};

int main() {
    Base b;
    Derived d;
    b.display(); // Base class display
    d.display(); // Derived class display
    b.show(5);   // Base class show
    d.show(5.5); // Derived class show
    return 0;
}
