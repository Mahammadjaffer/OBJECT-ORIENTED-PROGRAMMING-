#include <iostream>
bool isPrime(int num) { 
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return false; 
    return true; 
}
int main() {
    int num; std::cin >> num;
    std::cout << num << (isPrime(num) ? " is prime" : " is not prime") << std::endl;
}

