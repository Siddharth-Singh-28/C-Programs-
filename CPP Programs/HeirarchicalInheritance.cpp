#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // Accessing Animal class member function
    d.bark(); // Accessing Dog class member function

    Cat c;
    c.eat();  // Accessing Animal class member function
    c.meow(); // Accessing Cat class member function

    return 0;
}
