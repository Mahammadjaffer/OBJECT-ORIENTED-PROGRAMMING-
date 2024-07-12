#include <iostream>
#include <stdexcept>

void functionThrowingException() {
    throw std::runtime_error("Exception thrown");
}

int main() {
    try {
        functionThrowingException();
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}

