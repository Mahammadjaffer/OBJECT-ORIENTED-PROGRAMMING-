#include <iostream>
#include <cmath> // for cbrt

int main() {
    double num, cubeRoot;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num >= 0) {
        cubeRoot = cbrt(num);
        std::cout << "Cube root of " << num << " is: " << cubeRoot << std::endl;
    } else {
        std::cout << "Invalid input: Negative number." << std::endl;
    }

    return 0;
}

