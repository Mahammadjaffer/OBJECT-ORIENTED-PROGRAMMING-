#include <iostream>

int main() {
    char ch = 'A';
    char *ptr = &ch;
    std::cout << "Value of ch: " << *ptr << std::endl;
    return 0;
}

