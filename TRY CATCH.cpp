#include <iostream>
#include <stdexcept>

void functionWithTryCatch() {
    try {
        throw std::runtime_error("Error inside function");
    } catch (const std::exception &e) {
        std::cout << "Caught exception in function: " << e.what() << std::endl;
    }
}

int main() {
    functionWithTryCatch();
    return 0;
}

