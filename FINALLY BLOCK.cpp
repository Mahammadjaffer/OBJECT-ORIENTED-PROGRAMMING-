#include <iostream>
#include <stdexcept>

struct Finally {
  ~Finally() { std::cout << "Calculation finished (finally block)." << std::endl; }
};

void performCalculation(int num1, int num2) {
  if (num2 == 0) {
    throw std::runtime_error("Division by zero!");
  }

  Finally fin;
  try {
    int result = num1 / num2; // Simulate potential exception
    std::cout << "Result: " << result << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

int main() {
  try {
    performCalculation(10, 2);
    performCalculation(10, 0); 
  } catch (const std::exception& e) {
    std::cerr << "Error in main: " << e.what() << std::endl;
  }

  return 0;
}

