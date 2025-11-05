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
#include <ostream>
using namespace std;

int main()
{
    ofstream sout("stu.txt");
    int no, mrk;
    string nm;
    while (1)
    {
        cout << "Roll No: ";
        cin >> no;
        if (no == 0)
            break;
        cout << "Name: ";
        cin >> nm;
        cout << "Marks: ";
        cin >> mrk;

        sout << no << " " << nm << " " << mrk << " ";
    }
    sout.close();
    return 0;
}
