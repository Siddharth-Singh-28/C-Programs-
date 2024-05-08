#include <iostream>
using namespace std;

class GrandParent {
public:
    void display() {
        cout << "Display function of GrandParent class" << endl;
    }
};

class Parent : public GrandParent {
public:
    void show() {
        cout << "Show function of Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void print() {
        cout << "Print function of Child class" << endl;
    }
};

int main() {
    Child c;
    c.display(); // Accessing GrandParent class member function
    c.show();    // Accessing Parent class member function
    c.print();   // Accessing Child class member function
    return 0;
}
