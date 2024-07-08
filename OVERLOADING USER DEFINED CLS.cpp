#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int d = 0) : data(d) {}

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    MyClass obj(42);

    std::cout << "Object contents: " << obj << std::endl;

    return 0;
}

