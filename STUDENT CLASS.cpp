#include <iostream>
#include <string>
class Student {
private:
    std::string name;
    int age;
public:
    Student(const std::string& n, int a) : name(n), age(a) {
        std::cout << "Student " << name << " created.\n";
    }
    ~Student() {
        std::cout << "Student " << name << " destroyed.\n";
    }
};
int main() {
    Student s1("John", 20);
    {
        Student s2("Alice", 22);
    } 
    return 0;
}

