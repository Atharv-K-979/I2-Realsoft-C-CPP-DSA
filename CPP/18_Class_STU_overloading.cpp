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
class student
{
private:
    int rno;
    char nm[15];

public:
    void setData()
    {
        cout << "\nRoll No: ";
        cin >> rno;
        cout << "Name: ";
        cin >> nm;
    }
    void display()
    {
        cout << "\nName :" << nm << endl
             << "Roll no.:" << rno << endl;
    }
    void setData(int a)
    {
        rno = a;
        cout << "Name: ";
        cin >> nm;
    }
    void setData(int a, char *b)
    {
        rno = a;
        strcpy(nm, b);
    }
};
int main()
{
    student p, q, r;
    p.setData();
    p.display();
    q.setData(100);
    q.display();
    r.setData(101, "Sanjay");
    r.display();
    return 0;
}