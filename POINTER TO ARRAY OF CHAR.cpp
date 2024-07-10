#include <iostream>

int main() {
    char arr[] = "Hello";
    char *ptr = arr;
    std::cout << "Values in array: ";
    for(int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    return 0;
}

