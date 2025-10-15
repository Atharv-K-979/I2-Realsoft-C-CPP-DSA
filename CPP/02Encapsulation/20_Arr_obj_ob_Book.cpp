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

// int main(){
//     Book b[5];
//     for(int i=0;i<5;i++){
//         b[i].setData(i+1);
//     }
//     for(int i=0;i<5;i++){
//         b[i].display();
//     }
//     cout<<"Enter Search book id: ";
//     int id;
//     cin>>id;
//     for(int i=0;i<5;i++){
//         if(b[i].getId()==id){
//             cout<<"Book Found:\n";
//             b[i].display();
//             return 0;
//         }
//     }
// }

// Use of new operator
int main(){
    Book *b = new Book[5];      
    for(int i=0;i<5;i++){
        b[i].setData(i+1);
    }
    for(int i=0;i<5;i++){
        b[i].display();
    }
    cout<<"Enter Search book id: ";
    int id;
    cin>>id;
    for(int i=0;i<5;i++){
        if(b[i].getId()==id){
            cout<<"Book Found:\n";
            b[i].display();
            return 0;
        }
    }
    delete []b;  // free the memory
}