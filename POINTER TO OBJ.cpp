#include <iostream>

class MyClass {
public:
    int x;
    double y;
    MyClass(int a, double b) : x(a), y(b) {}
};

int main() {
    MyClass obj(10, 20.5);
    MyClass *ptr = &obj;
    std::cout << "Values of object attributes: x = " << ptr->x << ", y = " << ptr->y << std::endl;
    return 0;
}

