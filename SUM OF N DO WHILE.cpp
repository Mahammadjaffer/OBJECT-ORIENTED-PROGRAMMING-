#include <iostream>

int main() {
    int n, sum = 0, count = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1;
    }

    do {
        int num;
        std::cout << "Enter number " << count + 1 << ": ";
        std::cin >> num;
        sum += num;
        ++count;
    } while (count < n);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

