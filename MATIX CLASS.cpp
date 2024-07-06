#include <iostream>
using namespace std;

class Matrix {
    int mat[2][2];
public:
    void insert(int r, int c, int val) { mat[r][c] = val; }
    int retrieve(int r, int c) { return mat[r][c]; }
};
int main() {
    Matrix m;
    m.insert(0, 0, 1); m.insert(0, 1, 2); m.insert(1, 0, 3); m.insert(1, 1, 4);
    cout << m.retrieve(0, 0) << " " << m.retrieve(0, 1) << " " << m.retrieve(1, 0) << " " << m.retrieve(1, 1) << endl;
}

