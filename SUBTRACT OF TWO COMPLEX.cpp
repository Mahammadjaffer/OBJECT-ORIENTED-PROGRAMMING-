#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }
};

int main() {
    Complex c1(4, 5), c2(2, 3), c3;
    c3 = c1 - c2;
    cout << "Result: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}

