#include <iostream>
#include <sstream>
using namespace std;

int countWords(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word)
        count++;
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);
    cout << "Number of words: " << countWords(str) << endl;
    return 0;
}

