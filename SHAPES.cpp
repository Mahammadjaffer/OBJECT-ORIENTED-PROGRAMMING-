#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* s1 = new Rectangle(5, 10);
    Shape* s2 = new Circle(7);

    cout << "Area of Rectangle: " << s1->area() << endl;
    cout << "Area of Circle: " << s2->area() << endl;

    delete s1;
    delete s2;
    return 0;
}

