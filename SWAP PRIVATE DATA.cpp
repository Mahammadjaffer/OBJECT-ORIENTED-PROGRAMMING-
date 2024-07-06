#include <iostream>
using namespace std;

class class_2;  // Forward declaration

class class_1 {
    int value1;
public:
    class_1(int v) : value1(v) {}
    friend void swap(class_1 &, class_2 &);
    void display() const { cout << "class_1 value: " << value1 << endl; }
};

class class_2 {
    int value2;
public:
    class_2(int v) : value2(v) {}
    friend void swap(class_1 &, class_2 &);
    void display() const { cout << "class_2 value: " << value2 << endl; }
};

void swap(class_1 &a, class_2 &b) {
    int temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    cout << "Before swap:" << endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    cout << "After swap:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}

