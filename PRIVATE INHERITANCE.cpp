#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    void setX(int val) { x = val; }
};

class B : private A {
public:
    void display() {
        cout << "Here x is the protected data member of class A, ";
        cout << "class A is inherited privately to class B.\n";
        cout << "In private inheritance only protected data member and member functions can be accessed by the derived class.\n";
        cout << "Value of x: " << x << endl;
    }
    void setXPublic(int val) { setX(val); }
};

int main() {
    B obj;
    int val;
    cout << "value of x: ";
    cin >> val;
    obj.setXPublic(val);
    obj.display();
    return 0;
}

