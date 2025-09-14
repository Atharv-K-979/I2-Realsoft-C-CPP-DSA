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
void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
int main()
{

    int x, y;
    cin >> x >> y;
    cout << "x: " << x << " y: " << y << endl;
    swap(x, y);
    cout << "x: " << x << " y: " << y << endl;
    return 0;
}