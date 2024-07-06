#include <iostream>
#include <string>
class Book {
private:
    std::string title;
    std::string author;
public:
    Book(const std::string& t, const std::string& a) : title(t), author(a) {
        std::cout << "Book '" << title << "' by " << author << " created.\n";
    }
    ~Book() {
        std::cout << "Book '" << title << "' by " << author << " destroyed.\n";
    }
};
int main() {
    Book b1("The Catcher in the Rye", "J.D. Salinger");
    {
        Book b2("1984", "George Orwell");
    } 
    return 0;
}

