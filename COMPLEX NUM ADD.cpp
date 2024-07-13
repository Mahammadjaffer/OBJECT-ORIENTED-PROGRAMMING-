#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    friend Complex add(Complex, Complex);
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = add(c1, c2);
    c3.display();
    return 0;
}

