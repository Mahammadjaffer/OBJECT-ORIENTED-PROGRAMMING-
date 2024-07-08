#include <iostream>

class Array {
private:
    int arr[5];

public:
    Array() {
        for (int i = 0; i < 5; ++i) {
            arr[i] = i;
        }
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1);
        }
        return arr[index];
    }
};

int main() {
    Array a;

    std::cout << "Element at index 2: " << a[2] << std::endl;

    a[2] = 10;

    std::cout << "Modified element at index 2: " << a[2] << std::endl;

    return 0;
}

