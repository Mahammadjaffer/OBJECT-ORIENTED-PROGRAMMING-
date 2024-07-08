#include <iostream>
#include <algorithm>  // For std::sort

using namespace std;

// Function to sort an integer array
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}

// Function to sort a double array
void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {3, 1, 4, 1, 5, 9};
    double doubleArr[] = {2.7, 3.1, 4.1, 5.9};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    sortArray(intArr, intSize);
    sortArray(doubleArr, doubleSize);

    cout << "Sorted integer array: ";
    printArray(intArr, intSize);

    cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);

    return 0;
}

