// Multilevel inheritance
// Public derivetion
// Use of protected Data members

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
#include <ctime>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <sstream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <utility>
#include <cassert>
#include <cctype>
#include <chrono>

using namespace std;
class A
{
protected:
    int no;

public:
    A()
    {
        no = 0;
    }
    ~A() {}
    void set()
    {
        cout << "\nNo:";
        cin >> no;
    }
    void display()
    {
        cout << "\nNo: " << no;
    }
};
class B : public A
{
protected:
    char nm[15];

public:
    B() : A()
    {
        nm[0] = '\0';
    }
    ~B() {}
    void set()
    {
        A::set();
        cout << "\nName: ";
        cin >> nm;
    }
    void display()
    {
        A::display();
        cout << "\nName:";
        cout << nm;
    }
};
class C : public B
{
protected:
    double mrk;

public:
    C() : B()
    {
        mrk = 0.0;
    }
    ~C() {}
    void set()
    {
        B::set();
        cout << "\nMarks: ";
        cin >> mrk;
    }
    void display()
    {
        cout << "\nNo: " << no;
        cout << "\nName: " << nm;
        cout << "\nMarks: " << mrk;
    }
};
int main()
{
    C obj;
    obj.set();
    obj.display();
    return 0;
}