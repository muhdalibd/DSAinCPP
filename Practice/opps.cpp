#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void display(){
        cout << title << ", ";
        cout << author << ", ";
        cout << year << endl;
    }
};

int main(){
    Book b1;
    b1.title = "Matilda";
    b1.author = "Roald Dahl";
    b1.year = 1988;

    Book b2;
    b2.title = "The Giving Tree";
    b2.author = "Shel Silverstein";
    b2.year = 1964;

    b1.display();
    b2.display();
    return 0;
}