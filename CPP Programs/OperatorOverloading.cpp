#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5), result;
    result = c1 + c2;
    result.display();
    return 0;
}
