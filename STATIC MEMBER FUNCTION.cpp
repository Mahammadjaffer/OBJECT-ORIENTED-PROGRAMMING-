#include <iostream>
using namespace std;

class MyClass {
    static int count;
public:
    MyClass() { count++; }
    static void showcount() { cout << "Objects created: " << count << endl; }
};
int MyClass::count = 0;
int main() { MyClass a, b; MyClass::showcount(); }

