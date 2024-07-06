#include <iostream>
#include <cmath> // for sqrt

int main() {
    double num, squareRoot;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num >= 0) {
        squareRoot = sqrt(num);
        std::cout << "Square root of " << num << " is: " << squareRoot << std::endl;
    } else {
        std::cout << "Invalid input: Negative number." << std::endl;
    }

    return 0;
}

