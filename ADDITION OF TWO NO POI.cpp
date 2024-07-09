#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, *p1 = &a, *p2 = &b;
    cout << "Sum: " << (*p1 + *p2) << endl;
    return 0;
}

