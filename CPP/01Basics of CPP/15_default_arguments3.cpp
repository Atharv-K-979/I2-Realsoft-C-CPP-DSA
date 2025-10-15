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
int main()
{

    void repli(char ch = '*', int n = 5);
    repli('*', 7);
    repli('+', 3);
    repli('$');
    return 0;
}
void repli(char ch, int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    return;
}