#include <iostream>
using namespace std;

class Number
{
    int no;

public:
    Number()
    {
        no = 0;
    }
    Number(int a)
    {
        no = a;
    }
    Number(Number &t)
    {
        no = t.no;
    }

    ~Number() {}

    void setData()
    {
        cout << "Enter a number: ";
        cin >> no;
    }
    void display()
    {
        cout << no;
    }
    Number operator+(int val)
    {
        Number t(no + val);
        return t;
    }

    Number operator+(Number &k)
    {
        Number t(no + k.no);
        return t;
    }

    Number operator-(int val)
    {
        Number t(no - val);
        return t;
    }

    Number operator-(Number &k)
    {
        Number t(no - k.no);
        return t;
    }

    int operator>(int val)
    {
        return no > val;
    }

    int operator>(Number &k)
    {
        return no > k.no;
    }

    int operator<(int val)
    {
        return no < val;
    }

    int operator<(Number &k)
    {
        return no < k.no;
    }

    int operator==(int val)
    {
        return no == val;
    }

    int operator==(Number &k)
    {
        return no == k.no;
    }
    Number operator++()
    {
        no++;
        Number t(no);
        return t;
    }
    Number operator++(int)
    {
        Number t(no++);
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
        Number t(no);
        return *this;
    }
};

int main()
{
    Number n1;           
    n1.setData();       

    Number n2(10);      
    cout << "n2 = ";
    n2.display();
    cout << endl;

    Number n3 = n1 + n2; 
    cout << "n1 + n2 = ";
    n3.display();
    cout << endl;

    Number n4 = n1 + 5;  
    cout << "n1 + 5 = ";
    n4.display();
    cout << endl;

    Number n5 = n2 - n1; 
    cout << "n2 - n1 = ";
    n5.display();
    cout << endl;

    Number n6 = n2 - 3;  
    cout << "n2 - 3 = ";
    n6.display();
    cout << endl;

    cout << "n1 > n2 ? " << (n1 > n2 ? "True" : "False") << endl;
    cout << "n1 < 5 ? " << (n1 < 5 ? "True" : "False") << endl;
    cout << "n2 == 10 ? " << (n2 == 10 ? "True" : "False") << endl;

    ++n1;                
    cout << "After ++n1: ";
    n1.display();
    cout << endl;

    n2++;               
    cout << "After n2++: ";
    n2.display();
    cout << endl;

    n1 += 7;             
    cout << "After n1 += 7: ";
    n1.display();
    cout << endl;

    n2 -= 2;             
    cout << "After n2 -= 2: ";
    n2.display();
    cout << endl;

    return 0;
}