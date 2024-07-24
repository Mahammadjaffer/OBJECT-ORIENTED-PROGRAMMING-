#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x) {
        this->x = x;
    }
    void print() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Test obj(20);
    obj.print();
    return 0;
}

