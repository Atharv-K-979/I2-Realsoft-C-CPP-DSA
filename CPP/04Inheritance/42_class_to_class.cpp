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

    ~Result() {}

    Result(int a, double b) {
        rno = a;
        mrk = b;
    }

    // Copy constructor
    Result(const Result &k) {
        rno = k.rno;
        mrk = k.mrk;
    }

    // Output operator
    friend ostream &operator<<(ostream &out, const Result &r) {
        out << "\n\n--- Result Class Object ---";
        out << "\nRoll No: " << r.rno;
        out << "\nAverage Marks: " << fixed << setprecision(2) << r.mrk;
        return out;
    }
};

class Marks {
    int rno;
    int mrk[5];

public:
    Marks();
    ~Marks() {}

    friend istream &operator>>(istream &, Marks &);
    friend ostream &operator<<(ostream &, const Marks &);

    int total() const;   // Marked const ✅

    // Type conversion operators (marked const ✅)
    operator int() const { return rno; }
    operator double() const { return double(total()) / 5; }

    // Class-to-class type conversion (Marks → Result)
    operator Result() const {
        int a = rno;
        double b = total() / 5.0;
        Result r(a, b);
        return r;
    }
};

// Default constructor
Marks::Marks() {
    rno = 0;
    for (int i = 0; i < 5; i++) {
        mrk[i] = 0;
    }
}

// Calculate total marks (const ✅)
int Marks::total() const {
    int tot = 0;
    for (int i = 0; i < 5; i++) {
        tot += mrk[i];
    }
    return tot;
}

// Input operator
istream &operator>>(istream &in, Marks &m) {
    cout << "\nEnter Roll No: ";
    in >> m.rno;
    cout << "Enter 5 Marks: ";
    for (int i = 0; i < 5; i++) {
        in >> m.mrk[i];
    }
    return in;
}

// Output operator (can print const object ✅)
ostream &operator<<(ostream &out, const Marks &m) {
    out << "\n\n--- Marks Class Object ---";
    out << "\nRoll No: " << m.rno;
    out << "\nMarks: ";
    for (int i = 0; i < 5; i++) {
        out << m.mrk[i] << " ";
    }
    out << "\nTotal: " << m.total();
    out << "\nAverage: " << fixed << setprecision(2) << double(m);
    return out;
}

int main() {
    Marks m;
    cin >> m;
    cout << m;

    // Conversion from Marks → Result
    Result r;
    r = m; // invokes operator Result()
    cout << r;

    return 0;
}
