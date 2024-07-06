#include <iostream>
#include <string>
#include <cctype> // for std::isdigit, std::isalnum

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a number or string: ";
    std::getline(std::cin, input);
    
    // Check if alphanumeric and palindrome
    bool alphanumericPalindrome = true;
    
    for (int i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (!std::isalnum(c)) {
            alphanumericPalindrome = false;
            break;
        }
    }
    
    if (alphanumericPalindrome && isPalindrome(input)) {
        std::cout << "It is a palindrome" << std::endl;
    } else {
        std::cout << "It is not a palindrome or invalid input" << std::endl;
    }

    return 0;
}

