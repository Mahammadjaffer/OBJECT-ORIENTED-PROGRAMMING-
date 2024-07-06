#include <iostream>

bool isPerfect(int num) {
    if (num <= 0) {
        return false;
    }

    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPerfect(num)) {
        std::cout << num << " is a perfect number" << std::endl;
    } else {
        std::cout << num << " is not a perfect number" << std::endl;
    }

    return 0;
}

