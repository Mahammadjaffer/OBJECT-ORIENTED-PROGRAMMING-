#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double area() const override {
        return 4 * M_PI * radius * radius;
    }
    double volume() const override {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double area() const override {
        return 2 * M_PI * radius * (radius + height);
    }
    double volume() const override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Shape* s1 = new Sphere(5);
    Shape* s2 = new Cylinder(5, 10);

    cout << "Surface area of Sphere: " << s1->area() << endl;
    cout << "Volume of Sphere: " << s1->volume() << endl;
    cout << "Surface area of Cylinder: " << s2->area() << endl;
    cout << "Volume of Cylinder: " << s2->volume() << endl;

    delete s1;
    delete s2;
    return 0;
}

