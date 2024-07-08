#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate factorial of an integer
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

// Function to calculate factorial of a floating-point number by truncating it
int factorial(double n) {
    return factorial(static_cast<int>(n));
}

int main() {
    int intNum = 5;
    double doubleNum = 5.6;

    cout << "Factorial of " << intNum << " is " << factorial(intNum) << endl;
    cout << "Factorial of " << doubleNum << " (approximated) is " << factorial(doubleNum) << endl;

    return 0;
}

