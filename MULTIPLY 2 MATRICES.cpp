#include <iostream>
using namespace std;

class Matrix {
public:
    int data[2][2];
    Matrix operator*(const Matrix& m) {
        Matrix res;
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                res.data[i][j] = data[i][j] * m.data[i][j];
        return res;
    }
};

int main() {
    Matrix m1 = {{{1, 2}, {3, 4}}}, m2 = {{{2, 0}, {1, 2}}}, m3;
    m3 = m1 * m2;
    cout << m3.data[0][0] << " " << m3.data[0][1] << endl;
    cout << m3.data[1][0] << " " << m3.data[1][1] << endl;
    return 0;
}

