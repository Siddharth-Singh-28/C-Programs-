#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int regNumber;

public:
    Student() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    ~Student() {
        cout << "Destructor called." << endl;
    }

    void printData() {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

int main() {
    Student s;
    s.printData();
    return 0;
}
