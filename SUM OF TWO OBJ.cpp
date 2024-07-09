#include <iostream>
using namespace std;

class Sum {
    int value;

public:
    Sum(int v) : value(v) {}

    friend int add(Sum s1, Sum s2); // Friend function declaration
};

// Friend function definition
int add(Sum s1, Sum s2) {
    return s1.value + s2.value;
}

int main() {
    Sum obj1(10);
    Sum obj2(20);

    cout << "Sum of obj1 and obj2: " << add(obj1, obj2) << endl;

    return 0;
}

