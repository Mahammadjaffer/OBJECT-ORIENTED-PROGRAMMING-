#include <iostream>
using namespace std;

class MyClass {
    static int count;
public:
    MyClass() { count++; }
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2, obj3;
    MyClass::showCount();
    return 0;
}

