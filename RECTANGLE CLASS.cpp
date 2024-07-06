#include <iostream>
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle created with length = " << length << " and width = " << width << ".\n";
    }
    ~Rectangle() {
        std::cout << "Rectangle destroyed.\n";
    }
};
int main() {
    Rectangle r1(3.5, 2.0);
    {
        Rectangle r2(4.0, 4.0);
    }
    return 0;
}


