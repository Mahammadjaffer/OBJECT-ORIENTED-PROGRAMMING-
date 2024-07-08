#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    Counter operator++() { // Prefix increment operator
        ++count;
        return *this;
    }

    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c;

    ++c; // Increment using overloaded operator

    std::cout << "After incrementing: ";
    c.display();

    return 0;
}

