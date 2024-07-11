#include <iostream>
using namespace std;

class Person {
public:
    virtual void greet() const = 0;
};

class Student : public Person {
public:
    void greet() const override {
        cout << "Hello, I'm a student" << endl;
    }
};

class Teacher : public Person {
public:
    void greet() const override {
        cout << "Hello, I'm a teacher" << endl;
    }
};

int main() {
    Person* p1 = new Student();
    Person* p2 = new Teacher();

    p1->greet();
    p2->greet();

    delete p1;
    delete p2;
    return 0;
}

