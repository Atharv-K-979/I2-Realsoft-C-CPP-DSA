#include <iostream>
using namespace std;

class Number
{
    int no;

public:

    Number() { no = 0; }
    Number(int a) { no = a; }
    Number(const Number &t) { no = t.no; }


    void display()
    {
        cout << no << endl;
    }


    Number operator++()
    {
        no++;
        return *this;
    }

    Number operator++(int)
    {
        Number t(no);
        no++;
        return t;
    }

    Number operator+=(int a)
    {
        no = no + a;
        return *this;
    }

    Number operator-=(int a)
    {
        no = no - a;
        return *this;
    }
};

int main()
{
    Number k(7), p, q;

    cout << "Initial q: ";
    q.display();

    p = ++k;
    cout << "After p = ++k;" << endl;
    cout << "k: ";
    k.display();
    cout << "p: ";
    p.display();

    q = k++; 
    cout << "After q = k++;" << endl;
    cout << "k: ";
    k.display();
    cout << "q: ";
    q.display();

    q += 3; 
    cout << "After q += 3: ";
    q.display();

    q -= 3; 
    cout << "After q -= 3: ";
    q.display();

    return 0;
}