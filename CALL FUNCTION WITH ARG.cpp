#include <iostream>
using namespace std;

class Functor {
public:
    void operator()(int a, int b) {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    Functor f;
    f(3, 4);  // Calls the overloaded operator()
}

