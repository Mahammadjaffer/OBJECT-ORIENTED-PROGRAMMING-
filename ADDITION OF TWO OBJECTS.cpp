#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v = 0) : value(v) {}
    MyClass& operator+=(const MyClass& obj) {
        value += obj.value;
        return *this;
    }
};

int main() {
    MyClass obj1(10), obj2(20);
    obj1 += obj2;
    cout << "Result: " << obj1.value << endl;
    return 0;
}

