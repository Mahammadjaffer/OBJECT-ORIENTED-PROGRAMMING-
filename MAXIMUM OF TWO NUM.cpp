#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}
    friend int max(Number, Number);
};
int max(Number a, Number b) { return (a.value > b.value) ? a.value : b.value; }
int main() { Number n1(5), n2(10); cout << "Max: " << max(n1, n2) << endl; }

