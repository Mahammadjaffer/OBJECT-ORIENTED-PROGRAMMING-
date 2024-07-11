#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculatePay() const = 0;
};

class Manager : public Employee {
private:
    double salary;
public:
    Manager(double s) : salary(s) {}
    double calculatePay() const override {
        return salary;
    }
};

class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee* e1 = new Manager(5000);
    Employee* e2 = new Engineer(50, 160);

    cout << "Manager's Pay: " << e1->calculatePay() << endl;
    cout << "Engineer's Pay: " << e2->calculatePay() << endl;

    delete e1;
    delete e2;
    return 0;
}

