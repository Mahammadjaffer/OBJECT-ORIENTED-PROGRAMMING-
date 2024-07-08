#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate power for integers
int power(int base, int exponent) {
    return static_cast<int>(pow(base, exponent));
}

// Function to calculate power for floating-point numbers
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int intBase = 2, intExponent = 3;
    double doubleBase = 2.5, doubleExponent = 3.5;

    cout << intBase << " to the power of " << intExponent << " is " << power(intBase, intExponent) << endl;
    cout << doubleBase << " to the power of " << doubleExponent << " is " << power(doubleBase, doubleExponent) << endl;

    return 0;
}

