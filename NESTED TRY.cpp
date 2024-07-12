#include <iostream>
#include <exception>
#include <stdexcept> // Add this header

void nestedTryCatch() {
    try {
        try {
            throw std::runtime_error("Inner exception");
        } catch (const std::exception &e) {
            std::cout << "Caught inner exception: " << e.what() << std::endl;
            throw; // Rethrow the exception
        }
    } catch (const std::exception &e) {
        std::cout << "Caught outer exception: " << e.what() << std::endl;
    }
}

int main() {
    nestedTryCatch();
    return 0;
}


