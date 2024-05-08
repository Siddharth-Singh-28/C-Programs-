#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int valueA;
public:
    A() : valueA(0) {}

    friend void showValue(A a, B b);
};

class B {
private:
    int valueB;
public:
    B() : valueB(0) {}

    friend void showValue(A a, B b);
};

void showValue(A a, B b) {
    cout << "Value of A: " << a.valueA << endl;
    cout << "Value of B: " << b.valueB << endl;
}

int main() {
    A objA;
    B objB;
    showValue(objA, objB);
    return 0;
}
