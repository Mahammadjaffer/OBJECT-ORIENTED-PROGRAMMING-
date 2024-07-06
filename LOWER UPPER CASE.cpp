#include <iostream>
#include <algorithm>
int main() {
    std::string s; 
    std::getline(std::cin, s);
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    std::cout << s << std::endl;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::cout << s << std::endl;
    return 0;
}

