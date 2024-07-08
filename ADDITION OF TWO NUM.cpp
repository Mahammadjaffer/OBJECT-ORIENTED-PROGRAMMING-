#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
float add(float a, float b) { return a + b; }

int main() {
    cout << add(3, 4) << " " << add(3.5f, 4.5f) << endl;
}

