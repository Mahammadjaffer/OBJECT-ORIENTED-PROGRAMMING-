#include <iostream>
void greet() {
    std::cout << "Hello, World!" << std::endl;
}
int main() {
    void (*funcPtr)() = &greet;
    (*funcPtr)();  
    return 0;
}


