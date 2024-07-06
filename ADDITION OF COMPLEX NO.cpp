#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    friend Complex add(Complex, Complex);
    void display() { cout << real << "+" << imag << "i" << endl; }
};
Complex add(Complex a, Complex b) { return Complex(a.real + b.real, a.imag + b.imag); }
int main() { Complex c1(1, 2), c2(3, 4), c3; c3 = add(c1, c2); c3.display(); }

