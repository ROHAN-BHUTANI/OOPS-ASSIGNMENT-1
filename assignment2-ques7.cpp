#include <iostream>
using namespace std;

class A {
public:
    void func(int &val) {
        val *= 2;
    }
};

class B {
public:
    void func(int &val) {
        val *= 3;
    }
};

class C {
public:
    void func(int &val) {
        val *= 5;
    }
};

class D {
public:
    int val;

    D() : val(1) {}

    void update_val(int new_val) {
        A a;
        B b;
        C c;

        int countA = 0, countB = 0, countC = 0;

        while (new_val % 2 == 0) {
            new_val /= 2;
            countA++;
        }

        while (new_val % 3 == 0) {
            new_val /= 3;
            countB++;
        }

        while (new_val % 5 == 0) {
            new_val /= 5;
            countC++;
        }

        for (int i = 0; i < countA; ++i) {
            a.func(val);
        }

        for (int i = 0; i < countB; ++i) {
            b.func(val);
        }

        for (int i = 0; i < countC; ++i) {
            c.func(val);
        }

        cout << "A's func called " << countA << " times" << endl;
        cout << "B's func called " << countB << " times" << endl;
        cout << "C's func called " << countC << " times" << endl;
    }
};

int main() {
    D d;
    int new_val;
    cin >> new_val;
    d.update_val(new_val);
    return 0;
}
