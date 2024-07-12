#include <iostream>
#include <stdexcept> // Include standard exception header

void functionWithStandardException() {
    throw std::runtime_error("Standard exception occurred");
}

int main() {
    try {
        functionWithStandardException();
    } catch (const std::runtime_error &e) {
        std::cout << "Caught runtime error: " << e.what() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}

