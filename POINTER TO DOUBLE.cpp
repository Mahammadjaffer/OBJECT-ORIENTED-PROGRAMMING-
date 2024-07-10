#include <iostream>

int main() {
    double num = 3.14159;
    double *ptr = &num;
    std::cout << "Value of num: " << *ptr << std::endl;
    return 0;
}

