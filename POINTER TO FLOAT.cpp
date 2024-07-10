#include <iostream>

int main() {
    float num = 5.5;
    float *ptr = &num;
    std::cout << "Value of num: " << *ptr << std::endl;
    return 0;
}

