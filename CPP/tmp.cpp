#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Number
{
    int no;
public:
    void setData()
    {
        cout << "Enter no ";
        cin >> no;
    }
    void display()
    {
        cout << "\nThe no is:" << no;
    }
    friend void update(Number &);
};
void update(Number &t)
{
    t.no = t.no + 5;
}
int main()
{
    Number a;
    a.setData();
    a.display();
    update(a);
    a.display();
    return 0;
}