#include <iostream>
#include <iomanip>
int main() 
{ 
double c; 
std::cout << "Enter temperature in Celsius: "; 
std::cin >> c; std::cout << "Temperature in Fahrenheit: " 
<< std::fixed << std::setprecision(2) << (c * 9 / 5) + 32 << std::endl; 
return 0; 
}

