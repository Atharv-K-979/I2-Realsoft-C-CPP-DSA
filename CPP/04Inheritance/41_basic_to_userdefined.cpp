#include <bits/stdc++.h>
using namespace std;

class Marks {
    int rno;
    int mrk[5];

public:
    Marks();
    ~Marks() {}

    friend istream& operator>>(istream&, Marks&);
    friend ostream& operator<<(ostream&, const Marks&);

    int total() const;

    // Type conversion operators
    operator int() const { return rno; }
    operator double() const { return double(total()) / 5; }
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

istream& operator>>(istream& in, Marks& m) {
    cout << "\nEnter Roll No: ";
    in >> m.rno;
    cout << "Enter 5 Marks: ";
    for (int i = 0; i < 5; i++) {
        in >> m.mrk[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const Marks& m) {
    out << "\nRoll No: " << m.rno;
    out << "\nMarks: ";
    for (int i = 0; i < 5; i++) {
        out << m.mrk[i] << " ";
    }
    out << "\nTotal: " << m.total();
    out << "\nAverage: " << double(m);
    return out;
}

int main() {
    Marks a;
    cin >> a;
    cout << a;

    int no = a;        // implicit conversion to int
    double avg = a;    // implicit conversion to double

    cout << "\n\nConverted Values:";
    cout << "\nRoll No (int): " << no;
    cout << "\nAverage Marks (double): " << avg << endl;

    return 0;
}
