#include <iostream>
using namespace std;

void sum(int a[2][2], int b[2][2], int res[2][2]) {
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            res[i][j] = a[i][j] + b[i][j];
}

void sum(int a[], int b[], int res[], int size) {
    for (int i = 0; i < size; ++i)
        res[i] = a[i] + b[i];
}

int main() {
    int a1[2][2] = {{1, 2}, {3, 4}}, b1[2][2] = {{5, 6}, {7, 8}}, res1[2][2];
    int a2[3] = {1, 2, 3}, b2[3] = {4, 5, 6}, res2[3];

    sum(a1, b1, res1);
    sum(a2, b2, res2, 3);

    cout << "Matrix Sum:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << res1[i][j] << " ";
        cout << endl;
    }

    cout << "Array Sum:" << endl;
    for (int i = 0; i < 3; ++i)
        cout << res2[i] << " ";
    cout << endl;

    return 0;
}

