#include <iostream>
#include <string>
class BankAccount {
private:
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string& num, double bal) : accountNumber(num), balance(bal) {
        std::cout << "Bank account " << accountNumber << " is created with balance $" << balance << ".\n";
    }
    ~BankAccount() {
        std::cout << "Bank account " << accountNumber << " is destroyed.\n";
    }
};
int main() {
    BankAccount acc("123456", 1000.0);
    return 0;
}

