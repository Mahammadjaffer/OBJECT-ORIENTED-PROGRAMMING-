#include <iostream>
using namespace std;

int area(int side) { return side * side; }
int area(int length, int width) { return length * width; }
float area(float radius) { return 3.14f * radius * radius; }

int main() {
    cout << area(4) << " " << area(4, 5) << " " << area(3.0f) << endl;
    return 0;
}

