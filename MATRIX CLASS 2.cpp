#include <iostream>
using namespace std;

class Matrix {
    int mat[3][3];
public:
    void setElement(int row, int col, int value) {
        mat[row][col] = value;
    }
    int getElement(int row, int col) {
        return mat[row][col];
    }
    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    m.setElement(0, 0, 1);
    m.setElement(0, 1, 2);
    m.setElement(0, 2, 3);
    m.setElement(1, 0, 4);
    m.setElement(1, 1, 5);
    m.setElement(1, 2, 6);
    m.setElement(2, 0, 7);
    m.setElement(2, 1, 8);
    m.setElement(2, 2, 9);

    cout << "Matrix elements are: " << endl;
    m.display();

    return 0;
}

