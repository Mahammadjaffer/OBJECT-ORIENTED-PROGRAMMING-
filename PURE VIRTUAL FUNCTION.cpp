#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() {
        cout << "Area of circle: " << M_PI * radius * radius << endl;
    }
};

class Square : public Shape {
    float length;
public:
    Square(float l) : length(l) {}
    void area() {
        cout << "Area of square: " << length * length << endl;
    }
};

int main() {
    Circle c(5);
    Square s(4);
    c.area();
    s.area();
    return 0;
}

