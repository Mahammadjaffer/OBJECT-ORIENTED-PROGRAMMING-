#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() const = 0;
};

class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof" << endl;
    }
};

int main() {
    Animal* a1 = new Cat();
    Animal* a2 = new Dog();

    a1->speak();
    a2->speak();

    delete a1;
    delete a2;
    return 0;
}

