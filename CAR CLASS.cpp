#include <iostream>
#include <string>
class Car {
private:
    std::string brand;
    std::string model;
public:
    Car(const std::string& b, const std::string& m) : brand(b), model(m) {
        std::cout << "Car " << brand << " " << model << " is created.\n";
    }
    ~Car() {
        std::cout << "Car " << brand << " " << model << " is destroyed.\n";
    }
};
int main() {
    Car myCar("Toyota", "Camry");
    return 0;
}

