#include <iostream>
#include <stdexcept>

void functionWithMultipleExceptions(bool trigger) {
    if (trigger) {
        throw std::runtime_error("Runtime error occurred");
    } else {
        throw std::logic_error("Logic error occurred");
    }
}

int main() {
    try {
        functionWithMultipleExceptions(true);
    } catch (const std::runtime_error &e) {
        std::cout << "Caught runtime error: " << e.what() << std::endl;
    } catch (const std::logic_error &e) {
        std::cout << "Caught logic error: " << e.what() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}

