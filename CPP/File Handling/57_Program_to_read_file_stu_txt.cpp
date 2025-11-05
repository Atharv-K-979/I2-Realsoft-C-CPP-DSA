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
    ifstream sin("stu.txt");
    int no, mrk;
    string nm;
    while (1)
    {
        sin >> no >> nm >> mrk;
        if (sin.eof())
            break;
        cout << "\nRoll no: " << no;
        cout << "\nName :" << nm;
        cout << "\nMarks: " << mrk;
    }
    sin.close();
    return 0;
}