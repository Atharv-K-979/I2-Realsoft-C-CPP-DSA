#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <limits>
#include <cstring>
#include <cstdlib>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
#include <iostream>
using namespace std;

class Account
{
    int acno;
    string acname;
    int acbal;
    int acstate;

public:
    Account()
    {
        acno = acbal = acstate = 0;
    }
    ~Account() {}
    int getNo() { return acno; }
    int getState() { return acstate; }
    int getBal() { return acbal; }
    void display()
    {
        cout << "\nAccount Number: " << acno << "\nAccount Name: " << acname << "\nAccount Balance: " << acbal << "\nAccount State: " << acstate;
    }
    void setData(int a)
    {
        acno = a;
        cout << "A/C Name: ";
        cin >> acname;
        cout << "\nBalance: ";
        cin >> acbal;
        acstate = 1;
    }
    void delRecord()
    {
        acstate = 0;
    }
};
class AccAMD
{
    Account obj;
    fstream fa;

public:
    AccAMD();
    ~AccAMD()
    {
        fa.close();
    }
    int search(int a);
    void add();
    void mod();
    void del();
    void display();
    void menu();
};
int main()
{

    return 0;
}