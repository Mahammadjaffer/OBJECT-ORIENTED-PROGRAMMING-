#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
    }
};

int main() {
    Complex c1(2.3, 4.5);
    Complex c2(1.2, 3.4);
    Complex c3 = c1 + c2;

    std::cout << "Sum of two complex numbers: ";
    c3.display();

    return 0;
}

