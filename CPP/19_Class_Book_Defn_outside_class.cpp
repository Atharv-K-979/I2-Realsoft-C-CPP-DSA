#include <bits/stdc++.h>
using namespace std;

class Book
{
    int bid;
    string bnm;
    int bprice;

public:
    void setData();
    void setData(int);
    void setData(int, string, int);
    void display();

    int getId() { return bid; }
    int getPrice() { return bprice; }
    string getName() { return bnm; }
};

void Book::setData(int a, string b, int c)
{
    bid = a;
    bnm = b;
    bprice = c;
}

void Book::setData()
{
    cout << "Book Id: ";
    cin >> bid;
    cout << "Book Name: ";
    cin >> bnm;
    cout << "Book Price: ";
    cin >> bprice;
}

void Book::setData(int a)
{
    bid = a;
    cout << "Book Name: ";
    cin >> bnm;
    cout << "Book Price: ";
    cin >> bprice;
}

void Book::display()
{
    cout << "Book Name : " << bnm << endl
         << "Book Id   : " << bid << endl
         << "Book Price: " << bprice << endl;
}

// int main() {
//     Book b;
//     b.setData();
//     b.display();

//     Book a;
//     a.setData(100);
//     cout << "Book Id   : " << a.getId() << endl
//          << "Book Name : " << a.getName() << endl
//          << "Book Price: " << a.getPrice() << endl;

//     return 0;
// }

// int main(){
//     Book obj;
//     Book *ptr;
//     ptr=&obj;
//     ptr->setData();
//     ptr->display();
//     int id=ptr->getId();
//     ptr->setData(id);
//     ptr->display();
//     return 0;
// }

int main()
{
    Book *ptr;
    ptr = new Book;
    ptr->setData();
    ptr->display();
    int id = ptr->getId();
    ptr->setData(id);
    ptr->display();
    delete ptr;
}