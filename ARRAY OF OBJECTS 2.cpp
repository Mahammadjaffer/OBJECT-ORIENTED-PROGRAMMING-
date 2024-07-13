#include <iostream>
using namespace std;

class Manager {
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Manager managers[3];
    managers[0].setData("Alice", 30);
    managers[1].setData("Bob", 40);
    managers[2].setData("Charlie", 50);

    for (int i = 0; i < 3; i++) {
        managers[i].display();
    }
    return 0;
}

