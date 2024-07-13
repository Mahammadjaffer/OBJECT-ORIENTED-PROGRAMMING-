#include <iostream>
#include <vector>
using namespace std;

class Item {
    int code;
    float price;
public:
    Item(int c, float p) : code(c), price(p) {}
    int getCode() { return code; }
    float getPrice() { return price; }
};

class ShoppingList {
    vector<Item> list;
public:
    void addItem(int code, float price) {
        list.push_back(Item(code, price));
    }
    void deleteItem(int code) {
        for (auto it = list.begin(); it != list.end(); ++it) {
            if (it->getCode() == code) {
                list.erase(it);
                break;
            }
        }
    }
    void printTotal() {
        float total = 0;
        for (const auto& item : list) {
            total += item.getPrice();
        }
        cout << "Total value: " << total << endl;
    }
};

int main() {
    ShoppingList sl;
    sl.addItem(101, 5.50);
    sl.addItem(102, 10.75);
    sl.printTotal();
    sl.deleteItem(101);
    sl.printTotal();
    return 0;
}

