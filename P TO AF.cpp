#include <iostream>

int main() {
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *ptr = arr;
    std::cout << "Values in array: ";
    for(int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    return 0;
}

