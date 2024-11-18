#include <iostream>
using namespace std;

class Publication {
public:
    string title;
    Publication() {
        cout << "Enter title: ";
        getline(cin, title);
    }

    virtual void showInfo() {
        cout << "Title: " << title << endl;
    }
};

class Book : public Publication {
public:
    int accession_number;
    
    void showInfo(int a) override {
        Publication::showInfo();
        accession_number = a;
        cout << "Accession Number: " << accession_number << endl;
    }
};

class Magazine : public Publication {
public:
    int volume_number;
    
    void showInfo(int v) override {
        Publication::showInfo();
        volume_number = v;
        cout << "Volume Number: " << volume_number << endl;
    }
};

class Journal : public Book, public Magazine {
public:
    void showInfo(int a, int v) {
        Book::showInfo(a);
        Magazine::showInfo(v);
    }
};

int main() {
    Journal ob1;
    ob1.showInfo(600, 50);
    return 0;
}
