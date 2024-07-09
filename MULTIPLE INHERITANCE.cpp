#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void setName(string n) { name = n; }
};

class Job {
public:
    string role;
    void setRole(string r) { role = r; }
};

class Employee : public Person, public Job {
public:
    void display() {
        cout << "Name: " << name << ", Role: " << role << endl;
    }
};

int main() {
    Employee e;
    e.setName("John");
    e.setRole("Manager");
    e.display();
    return 0;
}


