#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "Display function of Base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void displayDerived1() {
        cout << "Display function of Derived1 class" << endl;
    }
};

class Derived2 {
public:
    void displayDerived2() {
        cout << "Display function of Derived2 class" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void displayDerived3() {
        cout << "Display function of Derived3 class" << endl;
    }
};

int main() {
    Derived3 d;
    d.displayBase();     // Accessing Base class member function
    d.displayDerived1(); // Accessing Derived1 class member function
    d.displayDerived2(); // Accessing Derived2 class member function
    d.displayDerived3(); // Accessing Derived3 class member function
    return 0;
}
