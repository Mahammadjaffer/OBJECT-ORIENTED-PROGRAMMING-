#include <iostream>
using namespace std;

class Animal {
public:
    virtual void move() const = 0;
};

class Bird : public Animal {
public:
    void move() const override {
        cout << "bird is Flying" << endl;
    }
};

class Fish : public Animal {
public:
    void move() const override {
        cout << "fish is Swimming" << endl;
    }
};

int main() {
    Animal* a1 = new Bird();
    Animal* a2 = new Fish();

    a1->move();
    a2->move();

    delete a1;
    delete a2;
    return 0;
}

