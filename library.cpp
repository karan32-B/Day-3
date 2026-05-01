#include <iostream>
#include <string>


using namespace std;

// Parent Class
class Item {
protected:
    int id;
    string title;

public:
    Item(int i, string t) : id(i), title(t) {}

    void displayBase() {
        cout << "ID: " << id << " | Title: " << title;
    }
};

// Child Class 1
class Book : public Item {
    string author;
public:
    Book(int i, string t, string a) : Item(i, t), author(a) {}

    void showBook() {
        displayBase(); // Reusing the parent function
        cout << " | Author: " << author << endl;
    }
};

// Child Class 2
class Magazine : public Item {
    int issue;
public:
    Magazine(int i, string t, int iss) : Item(i, t), issue(iss) {}

    void showMagazine() {
        displayBase(); // Reusing the parent function
        cout << " | Issue: " << issue << endl;
    }
};

int main() {
    Book b(101, "Coding Basics", "John Smith");
    Magazine m(202, "Tech Weekly", 45);

    b.showBook();
    m.showMagazine();

    return 0;
}