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

using namespace std;
class Number
{
protected:
    int no;

public:
    Number() { no = 0; }
    ~Number() {}
    void setData()
    {
        cout << "\nNo: ";
        cin >> no;
    }
    void display()
    {
        cout << "\nNo: " << no;
    }
    int getNo() { return no; }
};
class Name : public Number
{
protected:
    string nm;

public:
    Name() : Number() {}
    ~Name() {}
    void setData1()
    {
        cout << "\nName: ";
        cin >> nm;
    }
    void display1()
    {
        cout << "\nName: " << nm << endl;
    }
    string getName() { return nm; }
};
class Result : public Name
{
protected:
    int tmrk;

public:
    Result() : Name(){ tmrk = 0; }
    ~Result() {}
    void setData2()
    {
        cout << "\nTotal Marks: ";
        cin >> tmrk;
    }
    void display2()
    {
        cout << "\nTotal Marks: " << tmrk;
    }
    int getTotalMrk() { return tmrk; }
};
int main()
{
    Result r;
    r.setData();
    r.setData1();
    r.setData2();
    r.display();
    r.display1();
    r.display2();
    return 0;
}