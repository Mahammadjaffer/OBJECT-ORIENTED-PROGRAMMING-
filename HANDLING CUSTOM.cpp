#include <iostream>
#include <exception>

using namespace std;

// Define a custom exception class derived from std::exception
class CustomException : public exception {
public:
    virtual const char* what() const throw() {
        return "Custom Exception: Something went wrong!";
    }
};

int main() {
    try {
        int divisor = 0;
        
        // Simulating division by zero
        if (divisor == 0) {
            throw CustomException(); // Throwing the custom exception
        }
        
        int result = 10 / divisor;
        cout << "Result: " << result << endl;
    } catch (const CustomException& e) {
        cout << "Exception caught: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Standard exception caught: " << e.what() << endl;
    }
    
    return 0;
}



