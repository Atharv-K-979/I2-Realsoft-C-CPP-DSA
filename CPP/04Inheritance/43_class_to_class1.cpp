#include <bits/stdc++.h>
using namespace std;

class Marks {
    int rno;
    int mrk[5];

public:
    Marks();
    ~Marks() {}

    friend istream &operator>>(istream &, Marks &);
    friend ostream &operator<<(ostream &, const Marks &);

    int total() const; // marked const ✅

    // Type conversion operators
    operator int() const {
        return rno;
    }

    operator double() const {
        return double(total()) / 5.0;
    }
};

Marks::Marks() {
    rno = 0;
    for (int i = 0; i < 5; i++) {
        mrk[i] = 0;
    }
}

int Marks::total() const {
    int tot = 0;
    for (int i = 0; i < 5; i++) {
        tot += mrk[i];
    }
    return tot;
}

istream &operator>>(istream &in, Marks &m) {
    cout << "\nRoll No: ";
    in >> m.rno;
    cout << "Enter 5 Marks: ";
    for (int i = 0; i < 5; i++) {
        in >> m.mrk[i];
    }
    return in;
}

ostream &operator<<(ostream &out, const Marks &m) {
    out << "\nRoll No: " << m.rno;
    out << "\nMarks: ";
    for (int i = 0; i < 5; i++) {
        out << m.mrk[i] << " ";
    }
    out << "\nTotal: " << m.total();
    out << "\nAverage: " << fixed << setprecision(2) << double(m);
    return out;
}

class Result {
    int rno;
    double mrk;

public:
    Result() {
        rno = 0;
        mrk = 0.0;
    }

    Result(const Marks &k) {
        rno = k;       
        mrk = k;       
    }

    Result(int a, double b) {
        rno = a;
        mrk = b;
    }

    ~Result() {}

    friend ostream &operator<<(ostream &out, const Result &r) {
        out << "\n\n--- Result Class ---";
        out << "\nRoll No: " << r.rno;
        out << "\nAverage Marks: " << fixed << setprecision(2) << r.mrk;
        return out;
    }
};

int main() {
    Marks m;
    cin >> m;
    cout << m;

    // Convert Marks → Result
    Result r(m);
    cout << r;

    return 0;
}
