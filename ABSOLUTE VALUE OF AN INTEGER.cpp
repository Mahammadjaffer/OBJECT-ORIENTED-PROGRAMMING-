#include <iostream>
#include <cstdlib>  // For abs() for integers
#include <cmath>    // For fabs() for floating-point numbers

using namespace std;

// Function to find absolute value of an integer
int absolute(int n) {
    return abs(n);
}

// Function to find absolute value of a floating-point number
double absolute(double n) {
    return fabs(n);
}

int main() {
    int intNum = -5;
    double doubleNum = -5.6;

    cout << "Absolute value of " << intNum << " is " << absolute(intNum) << endl;
    cout << "Absolute value of " << doubleNum << " is " << absolute(doubleNum) << endl;

    return 0;
}

