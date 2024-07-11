#include <iostream>
using namespace std;

class Person {
public:
    virtual void work() const = 0;
};

class Employee : public Person {
public:
    void work() const override {
        cout << "Working as an employee" << endl;
    }
};

class Manager : public Person {
public:
    void work() const override {
        cout << "Managing a team" << endl;
    }
};

int main() {
    Person* p1 = new Employee();
    Person* p2 = new Manager();

    p1->work();
    p2->work();

    delete p1;
    delete p2;
    return 0;
}

