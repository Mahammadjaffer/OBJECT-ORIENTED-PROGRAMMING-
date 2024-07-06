#include <iostream>
using namespace std;

class Manager {
public:
    string name;
    int age;
    Manager(string n, int a) : name(n), age(a) {}
};
int main() {
    Manager m[] = { {"Alice", 30}, {"Bob", 40} };
    for (int i = 0; i < 2; i++) cout << m[i].name << " " << m[i].age << endl;
}

