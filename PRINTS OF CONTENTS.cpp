#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void print(double arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void print(char arr[]) {
    cout << arr << endl;
}

int main() {
    int intArr[] = {1, 2, 3};
    double doubleArr[] = {1.1, 2.2, 3.3};
    char charArr[] = "Hello";

    print(intArr, 3);
    print(doubleArr, 3);
    print(charArr);

    return 0;
}

