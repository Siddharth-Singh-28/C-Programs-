#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int regNumber;

public:
    void getData() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your registration number: ";
        cin >> regNumber;
    }

    void printData() {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.printData();
    return 0;
}
