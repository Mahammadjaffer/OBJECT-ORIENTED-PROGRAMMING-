#include <iostream>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
float max(float a, float b) { return (a > b) ? a : b; }
char max(char a, char b) { return (a > b) ? a : b; }

int main() {
    cout << max(3, 5) << " " << max(3.5f, 5.5f) << " " << max('a', 'b') << endl;
    return 0;
}

