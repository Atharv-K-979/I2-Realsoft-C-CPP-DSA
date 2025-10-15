#include <bits/stdc++.h>
using namespace std;

class Result {
    int rno;
    double mrk;

public:
    Result() {
        rno = 0;
        mrk = 0.0;
    }

    // Copy constructor
    Result(const Result &t) {
        rno = t.rno;
        mrk = t.mrk;
    }

    ~Result() {}

    // Input operator
    friend istream &operator>>(istream &in, Result &t) {
        cout << "\nRoll No: ";
        in >> t.rno;
        cout << "Marks: ";
        in >> t.mrk;
        return in;
    }

    // Output operator
    friend ostream &operator<<(ostream &out, const Result &t) {
        out << "\nRoll No: " << t.rno;
        out << " | Marks: " << fixed << setprecision(2) << t.mrk;
        return out;
    }

    // Relational operators
    bool operator>(const Result &a) const { return rno > a.rno; }
    bool operator<(const Result &a) const { return rno < a.rno; }

    // Operators for comparing roll number directly
    bool operator>(int a) const { return rno > a; }
    bool operator<(int a) const { return rno < a; }

    // + and - operators for mark adjustment
    Result operator+(double a) const {
        Result t;
        t.rno = rno;
        t.mrk = mrk + a;
        return t;
    }

    Result operator-(double a) const {
        Result t;
        t.rno = rno;
        t.mrk = mrk - a;
        return t;
    }

    int getNo() const { return rno; }
    double getMrk() const { return mrk; }
};

int main() {
    Result k[5], tmp;

    cout << "\nEnter data for 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cin >> k[i];
    }

    cout << "\n--- Before Sorting ---";
    for (int i = 0; i < 5; i++) {
        cout << k[i];
    }

    // Selection sort by roll number
    for (int i = 0; i < 4; i++) {
        int pos = i;
        for (int j = i + 1; j < 5; j++) {
            if (k[j] < k[pos])
                pos = j;
        }
        if (i != pos) {
            swap(k[i], k[pos]);
        }
    }

    cout << "\n\n--- After Sorting (by Roll No) ---";
    for (int i = 0; i < 5; i++) {
        cout << k[i];
    }

    // Demonstrate + and comparison
    cout << "\n\n--- Operator Demonstration ---";
    Result p = k[0] + 2.5;
    cout << "\nOriginal Marks: " << k[0].getMrk();
    cout << "\nAfter +2.5 Marks: " << p.getMrk();

    if (k[0] > p)
        cout << "\n" << k[0].getNo() << " has higher Roll No";
    else
        cout << "\n" << p.getNo() << " has higher Roll No";

    cout << endl;
    return 0;
}
