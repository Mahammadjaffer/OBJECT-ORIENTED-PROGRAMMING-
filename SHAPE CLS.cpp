#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
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
    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
    double side1, side2, side3;
public:
    Triangle(double b, double h, double s1, double s2, double s3) : base(b), height(h), side1(s1), side2(s2), side3(s3) {}
    double area() const override {
        return 0.5 * base * height;
    }
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Shape* s1 = new Rectangle(5, 10);
    Shape* s2 = new Triangle(5, 12, 5, 12, 13);

    cout << "Area of Rectangle: " << s1->area() << endl;
    cout << "Perimeter of Rectangle: " << s1->perimeter() << endl;
    cout << "Area of Triangle: " << s2->area() << endl;
    cout << "Perimeter of Triangle: " << s2->perimeter() << endl;

    delete s1;
    delete s2;
    return 0;
}

