#include <bits/stdc++.h>
using namespace std;

class dynobj {
    int *ptr;
    int noe; // number of elements

public:
    dynobj();                  // default constructor
    dynobj(int);               // parameterized constructor
    dynobj(const dynobj &);    // copy constructor
    ~dynobj();                 // destructor

    void setData();            // input array elements
    void display();            // display array elements
    int total();               // sum of elements
    int getAvg();              // average of elements
};

// Default constructor
dynobj::dynobj() {
    noe = 5;
    ptr = new int[noe];
}

// Parameterized constructor
dynobj::dynobj(int n) {
    noe = n;
    ptr = new int[noe];
}

// Copy constructor (deep copy)
dynobj::dynobj(const dynobj &d) {
    noe = d.noe;
    ptr = new int[noe];
    for (int i = 0; i < noe; i++) {
        ptr[i] = d.ptr[i];
    }
}

// Destructor
dynobj::~dynobj() {
    delete[] ptr;
}

// Function to input array elements
void dynobj::setData() {
    cout << "Enter " << noe << " elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> ptr[i];
    }
}

// Function to display array elements
void dynobj::display() {
    cout << "Array elements: ";
    for (int i = 0; i < noe; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

// Function to calculate total
int dynobj::total() {
    int sum = 0;
    for (int i = 0; i < noe; i++) {
        sum += ptr[i];
    }
    return sum;
}

// Function to calculate average
int dynobj::getAvg() {
    return total() / noe;
}

int main() {
    dynobj d1;         // default constructor
    d1.setData();
    d1.display();
    cout << "Total: " << d1.total() << endl;
    cout << "Average: " << d1.getAvg() << endl;

    cout << "\nUsing copy constructor:\n";
    dynobj d2 = d1;    // calls copy constructor
    d2.display();

    return 0;
}
