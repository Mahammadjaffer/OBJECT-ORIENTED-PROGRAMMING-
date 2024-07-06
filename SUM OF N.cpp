#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        int num;
        std::cout << "Enter number " << i << ": ";
        std::cin >> num;
        sum += num;
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

