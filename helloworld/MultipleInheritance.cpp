#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Display function of Base1 class" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Display function of Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "Show function of Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display1(); // Accessing Base1 class member function
    d.display2(); // Accessing Base2 class member function
    d.show();      // Accessing Derived class member function
    return 0;
}
