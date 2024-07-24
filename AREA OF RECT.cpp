#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rects[] = { Rectangle(7, 4), Rectangle(5, 4) };
    for (int i = 0; i < 2; ++i) {
        cout << "Area of rectangle " << i + 1 << ": " << rects[i].area() << endl;
    }

    return 0;
}

