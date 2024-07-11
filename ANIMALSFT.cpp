#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() const = 0;
};

class Herbivore : public Animal {
public:
    void eat() const override {
        cout << "Eating plants" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() const override {
        cout << "Eating meat" << endl;
    }
};

int main() {
    Animal* a1 = new Herbivore();
    Animal* a2 = new Carnivore();

    a1->eat();
    a2->eat();

    delete a1;
    delete a2;
    return 0;
}

