#include <iostream>
using namespace std;

class A {
protected:
    float x;
public:
    A(float a) : x(a) {}
};

class B {
protected:
    float y;
public:
    B(float b) : y(b) {}
};

class Sum : public A, public B {
public:
    Sum(float a, float b) : A(a), B(b) {}
    void display() {
        cout << "Sum = " << x + y << endl;
    }
};

int main() {
    Sum obj(5, 4);
    obj.display();
    return 0;
}

