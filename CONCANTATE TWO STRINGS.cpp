#include <iostream>
#include <string>
using namespace std;

string concatenate(const string& a, const string& b) { return a + b; }
string concatenate(const char* a, const char* b) { return string(a) + string(b); }

int main() {
    cout << concatenate("Hello, ", "World!") << " " << concatenate("Foo", "Bar") << endl;
    return 0;
}

