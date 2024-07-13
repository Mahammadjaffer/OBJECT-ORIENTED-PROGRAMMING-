#include <iostream>
#include <algorithm>
using namespace std;

void findMinMax(int arr[], int n, int &min, int &max) {
    min = *min_element(arr, arr + n);
    max = *max_element(arr, arr + n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min, max;
    findMinMax(arr, n, min, max);
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    return 0;
}

