#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}
    void print() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imag << endl;
    }
};

int main() {
    Complex c(1, 54);
    Complex* ptr = &c;
    ptr->print();
    return 0;
}

