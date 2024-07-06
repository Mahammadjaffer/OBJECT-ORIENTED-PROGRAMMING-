#include <iostream>
#include <vector>

int findMissingElement(const std::vector<int>& arr) {
    int n = arr.size();
    int expected = 0;

    while (expected < n && arr[expected] == expected) {
        ++expected;
    }

    return expected;
}

int main() {
    std::vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    int missing = findMissingElement(arr);
    std::cout << "Smallest missing element: " << missing << std::endl;

    return 0;
}

