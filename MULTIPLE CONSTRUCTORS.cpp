#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Parameterized constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Copy constructor
    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect1; // Calls default constructor
    Rectangle rect2(3, 4); // Calls parameterized constructor
    Rectangle rect3 = rect2; // Calls copy constructor

    cout << "Area of rect1: " << rect1.area() << endl;
    cout << "Area of rect2: " << rect2.area() << endl;
    cout << "Area of rect3: " << rect3.area() << endl;

    return 0;
}

