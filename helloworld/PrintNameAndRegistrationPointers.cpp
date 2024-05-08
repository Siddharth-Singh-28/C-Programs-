#include <iostream>
using namespace std;

int main() {
    string name;
    int regNumber;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your registration number: ";
    cin >> regNumber;

    string *namePtr = &name;
    int *regNumberPtr = &regNumber;

    cout << "Name: " << *namePtr << endl;
    cout << "Registration Number: " << *regNumberPtr << endl;

    return 0;
}
