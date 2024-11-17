#include <iostream>
#include <string>
using namespace std;

class Publication {
public:
    string title;

    Publication() {
        cout << "Enter Title: ";
        getline(cin, title);
    }

    virtual void showInfo() const {
        cout << "Title: " << title << endl;
    }
};

class Book : public Publication {
protected:
    int accession_number;

public:
    Book(int a = 0) : accession_number(a) {}

    void showInfo() const override {
        Publication::showInfo();
        cout << "Accession Number: " << accession_number << endl;
    }
};

class Magazine : public Publication {
protected:
    int volume_number;

public:
    Magazine(int v = 0) : volume_number(v) {}

    void showInfo() const override {
        Publication::showInfo();
        cout << "Volume Number: " << volume_number << endl;
    }
};

class Journal : public Book, public Magazine {
public:
    Journal(string t, int a = 0, int v = 0) : Publication(), Book(a), Magazine(v) {
        title = t;
    }

    void showInfo() const override {
        Book::showInfo();
        Magazine::showInfo();
    }
};

int main() {
    Journal ob1("Science Journal", 600, 50);
    ob1.showInfo();
    return 0;
}
